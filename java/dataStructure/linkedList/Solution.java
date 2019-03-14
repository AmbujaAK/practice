import java.util.Scanner;

public class Solution{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        LinkedList list = new LinkedList();

        while(true){
            System.out.println("\n\n");
            System.out.println("-------------------------");
            System.out.println("Enter your choice ::");
            System.out.println("1. Print the list -> ");
            System.out.println("2. Insertion At Beginning");
            System.out.println("3. Insertion At Middle");
            System.out.println("4. Insertion At End");
            System.out.println("5. Deletion From Beginning");
            System.out.println("6. Deletion At Middle");
            System.out.println("7. Deletion At End");
            System.out.println("8. Length of list");
            System.out.println("9. Clear the list");
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
            
            int data, pos;
            switch(ch) {
                case 1:
                    System.out.println("");
                    LinkedList.PrintList(list);
                    break;
                case 2:
                    System.out.print("Enter the value to be inserted :: ");
                    data = sc.nextInt();
                    list = LinkedList.InsertAtBegin(list, data);
                    LinkedList.PrintList(list);
                    break;
                case 3:
                    System.out.println("Enter the data and position ::");
                    data = sc.nextInt();
                    pos = sc.nextInt();
                    list = LinkedList.InsertAtMiddle(list, data, pos);
                    LinkedList.PrintList(list);
                    break;
                case 4:
                    System.out.print("Enter the data :: ");
                    data = sc.nextInt();
                    System.out.println("data is " + data);
                    list = LinkedList.InsertAtEnd(list, data);
                    LinkedList.PrintList(list);
                    break;
                case 5:
                    list = LinkedList.DeleteFromBegin(list);
                    LinkedList.PrintList(list);
                    break;
                case 6:
                    System.out.print("Enter the postion :: ");
                    pos = sc.nextInt();
                    list = LinkedList.DeletionFromMiddle(list, pos);
                    LinkedList.PrintList(list);
                    break;
                case 7:
                    list = LinkedList.DeletionFromEnd(list);
                    LinkedList.PrintList(list);
                    break;
                case 8:
                    System.out.print("Length of list :: ");
                    LinkedList.lengthOfList();
                    LinkedList.PrintList(list);
                    break;
                case 9:
                    LinkedList.clearList(list);
                    break;
                default:
                    LinkedList.PrintList(list);
            }
        }
        sc.close();
    }
}