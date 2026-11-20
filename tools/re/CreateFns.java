import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import java.nio.file.*;
public class CreateFns extends GhidraScript {
  public void run() throws Exception {
    int n = 0;
    for (String s : Files.readAllLines(Paths.get("/home/claude/work/funcs.txt"))) {
      s = s.trim(); if (s.isEmpty()) continue;
      Address a = toAddr(Long.parseLong(s, 16));
      if (getFunctionAt(a) != null) continue;
      if (getInstructionAt(a) == null) disassemble(a);
      if (createFunction(a, null) != null) n++;
    }
    println("created " + n);
  }
}
