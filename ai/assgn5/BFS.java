import java.util.InputMismatchException;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.io.File;
import java.io.IOException;

public class BFS {

    private Queue<Integer> queue;

    public BFS(){
        queue = new LinkedList<Integer>();
    }

    public void bfs(int a[][], int source) {
        int non = a[source].length - 1;

        int[] visited = new int[non + 1];
        int i, element;

        visited[source] = 1;
        queue.add(source);

        while (!queue.isEmpty()) {
            element = queue.remove();
            i = element;
            System.out.print(i + "\t");
            while (i <= non) {
                if (a[element][i] == 1 && visited[i] == 0) {
                    queue.add(i);
                    visited[i] = 1;
                }
                /*
                //------------ Not Reachable Case --------------
                if (visited[i] == 1) {
                  System.out.println("BFS is not possible , All nodes are not reachable");
                  break;
                }
                */
                i++;
            }
        }
    }

    public static void main(String[] args) {
        int non, source;
        Scanner scanner = null;

        System.out.println("Enter the number of nodes in the graph");
        scanner = new Scanner(System.in);
        non = scanner.nextInt();
        int a[][] = new int[non + 1][non + 1];
        try {
          // To choose the matrix
          System.out.println("Enter the matrix number : ");
          Scanner sCount = new Scanner(System.in);
          int count = sCount.nextInt();
          File f = new File("matrix" + count + ".txt");

          // To read the matrix from the file .
          Scanner sc = new Scanner(f);
          while( sc.hasNextLine()) {
            System.out.println("Matrix is :");
            for (int i=1; i<=non; i++) {
              for (int j=1; j<=non; j++) {
                a[i][j] = sc.nextInt();
                System.out.print(a[i][j] + " ");
              }
              System.out.println();
            }
          }
          sc.close();
        } catch(IOException e) {
          e.printStackTrace();
        //scanner.close();
        }
          System.out.println("Enter the source/starting vertex for the graph");
          source = scanner.nextInt();

          System.out.println("The BFS traversal of the graph is ");
          BFS bfs = new BFS();
          bfs.bfs(a, source);
  }
}
