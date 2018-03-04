import java.io.File;
import java.io.IOException;
import java.util.Scanner;

class nextError {
  public static void main(String[] args) {
    try {
      Scanner sc = new Scanner(new File("input.txt"));

      while(sc.hasNextLine()) {
        String s = sc.nextLine();
        System.out.println(s);
      }
      sc.close();
    } catch(IOException e) {
      e.printStackTrace();
    }
  }
}
