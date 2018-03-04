import java.io.*;

class makeDirectory {
  public static void main(String[] args) throws IOException {
    File f = new File("testing");
    f.mkdir();
  }
}
