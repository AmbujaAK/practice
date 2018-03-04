import java.io.*;

class createFile {
  public static void main(String[] args) throws IOException {
    try {
      File f = new File("testing/test.txt");
      boolean fv = f.createNewFile();

      if (fv) {
        System.out.println("File created !!");
      }
      else
        System.out.println("File already present !!");
    } catch(IOException e) {
      System.out.println("Exception Occured !!");
      e.printStackTrace();
    }
  }
}
