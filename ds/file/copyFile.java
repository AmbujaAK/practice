import java.util.*;
import java.io.*;

class copyFile {
  public static void main (String[] args) throws IOException {
    FileInputStream in  = null;
    FileOutputStream out = null;

    try {
      in = new FileInputStream("fileStore/input.txt");
      out = new FileOutputStream("fileStore/output.txt");

      int c;
      // copying file from input to output.
      while((c = in.read()) != -1) {
        out.write(c);
      }
    } finally {
      if (in != null) {
        in.close();
      }
      if (out != null) {
        out.close();
      }
    }
  }
}
