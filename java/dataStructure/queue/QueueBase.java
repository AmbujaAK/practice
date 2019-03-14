import java.io.*;
import java.util.Scanner;
import java.util.Queue;
import java.util.LinkedList;

class QueueBase {
    public static void main(String[] args) {
        Queue<Integer> queue = new LinkedList<>();

        Scanner sc = new Scanner(System.in);
        while(true){
            System.out.println("\n\n");
            System.out.println("-------------------------");
            System.out.println("Enter your choice ::");
            System.out.println("1. Insertion");
            System.out.println("2. Deletion");
            System.out.println("3. Front element");
            System.out.println("4. Size of queue");
            System.out.println("5. Clear the Queue");
            System.out.println("-------------------------");

            System.out.println("0. [ EXIT ] \n");
            System.out.println("-------------------------");
            
            System.out.print("Choice :: ");
            int ch= sc.nextInt();
            
            if(ch ==0){
                System.out.println("***********************************");
                System.out.println("*     EXIT from the execution!!   *");
                System.out.println("***********************************");
                break;
            }
            
            switch(ch){
                case 1:
                    System.out.print("Enter the item :: ");
                    int d = sc.nextInt();
                    queue.add(d);
                    System.out.println(queue);
                    break;
                case 2:
                    queue.poll();
                    System.out.println(queue);
                    break;
                case 3:
                    System.out.println("Top elements :: " + queue.peek());
                    System.out.println(queue);
                    break;
                case 4:
                    System.out.println("Size is :: " + queue.size());
                    System.out.println(queue);
                    break;
                case 5:
                    queue.clear();
                    System.out.println(queue);
                    break;
                default:
                    System.out.println(queue);
            }
        }
        sc.close();

    }
}