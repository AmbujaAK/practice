import java.io.*;
import java.util.Stack;
import java.util.Scanner;

class StackBase {
    public static Stack clearStack(Stack<Integer> stack){
        while(!stack.empty())
            stack.pop();
        return stack;
    }
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<Integer>();

        Scanner sc = new Scanner(System.in);

        while(true){
            System.out.println("\n\n");
            System.out.println("-------------------------");
            System.out.println("Enter your choice ::");
            System.out.println("1. Insertion");
            System.out.println("2. Deletion");
            System.out.println("3. Top element");
            System.out.println("4. Search element");
            System.out.println("5. Clear the Stack");
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
                    stack.push(d);
                    System.out.println(stack);
                    break;
                case 2:
                    if(stack.empty())
                        System.out.println("Stack is EMPTY");
                    else{
                        stack.pop();
                        System.out.println(stack);
                    }
                    break;
                case 3:
                    if(stack.empty())
                        System.out.println("Stack is EMPTY");
                    else{
                        System.out.println("Top elements :: " + stack.peek());
                        System.out.println(stack);
                    }
                    break;
                case 4:
                    System.out.print("Enter the element to be searched for :: ");
                    int e = sc.nextInt();
                    System.out.println("Found at :: " + stack.search(e));
                    System.out.println(stack);
                    break;
                case 5:
                    clearStack(stack);
                    System.out.println(stack);
                    break;
                default:
                    System.out.println(stack);
            }
        }
        sc.close();
    }
}