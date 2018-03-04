import java.io.*;

class inputFromFile {
  public static void main(String[] args) throws IOException {

    BufferedReader br = new BufferedReader(new FileReader("fileStore/myname.txt"));
    System.out.println("Your matrix is : ");
    String name;

    while ((name = br.readLine()) != null) {
      System.out.println(name);
    }
  }
}
