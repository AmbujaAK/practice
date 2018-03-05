import java.io.File;
import java.util.Scanner;
import java.io.IOException;

public class storeMatrixFromFile {
  public static void main(String[] args) {
    //int size = 6;
    //int a[][] = new int[size][size];
    try {
      //Scanner sc = new Scanner(new File("textFile/matrix.txt"));
      // To choose the matrix
      System.out.println("Enter the matrix size : ");
      Scanner sSize = new Scanner(System.in);
      int size = sSize.nextInt();
      int a[][] = new int[size][size];
      
      File f = new File("textFile/matrix" + size + ".txt");
      Scanner sc = new Scanner(f);
      // To read the matrix from the file .
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
