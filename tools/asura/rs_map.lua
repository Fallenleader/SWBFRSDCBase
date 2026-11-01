-- rs_map: the value constructors of Renegade Squadron map scripts (tools/asura/luascript.py; docs/MAPS.md), for running a script
-- with Lua 5.3 / 5.4.  A script:
--     require "rs_map"
--     return chunk "FOG " { f32(0.5), f32(0.6), f32(0.7), u32(0), ... }
-- Run as a module (package.path including this folder), chunk / resource return the packed bytes of the data (little-endian),
-- so Lua code can build map chunks: loops, functions, data converted from other formats.  maptool pack runs scripts that are
-- not plain lists through Lua with DUMP set (the items, one per line, in maptool's text syntax).
local M = {}
local function item(k, v) return {__rs = k, v = v} end
for _, k in ipairs{"u32", "i32", "x32", "f32", "u16", "u8", "str", "wstr", "hex"} do
  M[k] = function(v) return item(k, v) end
end

local function flatten(t, out)
  for _, x in ipairs(t) do
    if type(x) == "table" and x.__rs then out[#out + 1] = x
    elseif type(x) == "table" then flatten(x, out)
    else error("a map script value must be made with u32/i32/x32/f32/u16/u8/str/wstr/hex, got " .. tostring(x), 3) end
  end
  return out
end

local function utf16(s)
  local o = {}
  for _, c in utf8.codes(s) do
    if c >= 0x10000 then c = c - 0x10000; o[#o + 1] = string.pack("<I2I2", 0xD800 + (c >> 10), 0xDC00 + (c & 0x3FF))
    else o[#o + 1] = string.pack("<I2", c) end
  end
  return table.concat(o) .. "\0\0"
end
local function int(v) return math.tointeger(v) or error("a whole number is needed, got " .. tostring(v), 4) end

local function bytes(items)
  local o = {}
  for _, it in ipairs(items) do
    local k, v = it.__rs, it.v
    if k == "u32" or k == "x32" then o[#o + 1] = string.pack("<I4", int(v) & 0xFFFFFFFF)
    elseif k == "i32" then o[#o + 1] = string.pack("<i4", int(v))
    elseif k == "f32" then o[#o + 1] = string.pack("<f", v)
    elseif k == "u16" then o[#o + 1] = string.pack("<I2", int(v) & 0xFFFF)
    elseif k == "u8" then o[#o + 1] = string.pack("<I1", int(v) & 0xFF)
    elseif k == "str" then local s = v .. "\0"; o[#o + 1] = s .. string.rep("\0", (-#s) % 4)
    elseif k == "wstr" then o[#o + 1] = utf16(v)
    elseif k == "hex" then for h in v:gmatch("%x%x") do o[#o + 1] = string.char(tonumber(h, 16)) end end
  end
  return table.concat(o)
end

-- DUMP mode: the items in maptool's text syntax (textdump.py), one per line
local function esc(s, wide)
  return (s:gsub('[%c"\\\128-\255]', function(c)
    if c == "\\" then return "\\\\" elseif c == '"' then return '\\"' elseif c == "\n" then return "\\n" elseif c == "\t" then return "\\t" end
    return string.format("\\x%02x", c:byte())
  end))
end
local function dump(items)
  local o = {}
  for _, it in ipairs(items) do
    local k, v = it.__rs, it.v
    if k == "str" then o[#o + 1] = 'str "' .. esc(v) .. '"'
    elseif k == "wstr" then
      local t = {}
      for _, c in utf8.codes(v) do
        if c < 128 then t[#t + 1] = esc(string.char(c)) else t[#t + 1] = string.format("\\u%04x", c) end
      end
      o[#o + 1] = 'wstr "' .. table.concat(t) .. '"'
    elseif k == "hex" then o[#o + 1] = "hex " .. v
    elseif k == "f32" then o[#o + 1] = "f32 " .. string.format("%.9g", v)
    else o[#o + 1] = k .. " " .. string.format("%d", int(v)) end
  end
  return table.concat(o, "\n") .. "\n"
end

local function maker(kind)
  return function(name)
    return function(t)
      local items = flatten(t, {})
      if M.DUMP then return dump(items) end
      return bytes(items), kind, name
    end
  end
end
M.chunk = maker("chunk")
M.resource = maker("resource")
M.flatten = function(t) return flatten(t, {}) end
M.pack = bytes

-- require "rs_map" makes the constructors global, as the scripts use them
for k, v in pairs(M) do if type(v) == "function" and k ~= "flatten" and k ~= "pack" then _G[k] = v end end
return M
