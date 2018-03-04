import java.io.File;
import java.util.Scanner;
import java.io.IOException;

public class storeMatrixFromFile {
  public static void main(String[] args) {
    int size = 5;
    int a[][] = new int[size][size];
    try {
      Scanner sc = new Scanner(new File("textFile/matrix.txt"));

      while( sc.hasNextLine()) {
        System.out.println("Matrix is :");
        for (int i=0; i<size; i++) {
          for (int j=0; j<size; j++) {
            a[i][j] = sc.nextInt();
            System.out.print(a[i][j] + " ");
          }
          System.out.println();
        }
        System.out.println("--------------------");
        System.out.println("Element(1,1) is : " + a[1][1]);
      }
      sc.close();
    } catch(IOException e) {
      e.printStackTrace();
    }
  }
}
