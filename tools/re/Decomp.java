// Decompile functions listed (hex addrs) in env DECOMP_LIST to DECOMP_OUT dir
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import java.io.*;
public class Decomp extends GhidraScript {
  public void run() throws Exception {
    String list = System.getenv("DECOMP_LIST"); String out = System.getenv("DECOMP_OUT");
    DecompInterface d = new DecompInterface(); d.openProgram(currentProgram);
    for (String s : list.split("[ ,]+")) {
      if (s.isEmpty()) continue;
      Address a = toAddr(Long.parseLong(s, 16));
      Function f = getFunctionAt(a);
      if (f == null) { disassemble(a); f = createFunction(a, null); }
      if (f == null) { println("no fn " + s); continue; }
      DecompileResults r = d.decompileFunction(f, 120, monitor);
      try (PrintWriter w = new PrintWriter(new FileWriter(out + "/" + s.toUpperCase() + ".c"))) {
        w.println(r.getDecompiledFunction() != null ? r.getDecompiledFunction().getC() : "// failed " + r.getErrorMessage());
      }
    }
  }
}
