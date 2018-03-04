import java.io.*;
import java.util.*;

class outputInFile {
  public static void main(String[] args) throws FileNotFoundException {
    System.out.println("Enter you name :");
    Scanner sc = new Scanner(System.in);
    String name = sc.nextLine();

    // To print anything in file , we need to change the output method.
    PrintStream file = new PrintStream(new File("fileStore/output.txt"));
    PrintStream console = System.out;

    // set output method to file
    System.setOut(file);
    System.out.println(name);

    // set output method to console
    System.setOut(console);
    System.out.println(name);
  }
}
