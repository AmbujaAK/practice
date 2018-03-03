import java.util.*;

// begin class
class stack {
  int top = -1,size, s[];

  //initialise constructor
  stack(int n) {
    size = n;
    s = new int[size];
    for (int i=0; i<size; i++ ) {
      s[i] = 0;
    }
  }//end constructor

  //function to insert
  private void push(int item) {
    //checking for overflow
    if (top == (size -1)) {
      System.out.println("Stack Overflow");
    }
    else {
      top++;
      s[top] = item;
    }
  }

  //function to delete
  private void pop() {
    //checking for empty
    if (top == -1) {
      System.out.println("Stack Underflow");
    }
    else {
      System.out.println("Item deleted is :" + s[top]);
      top--;
    }
  }

  private void topItem() {
    if (top == -1) {
      System.out.println("Stack is EMPTY");
    }
    else {
      System.out.println("Top element is :" + s[top]);
    }
  }

  private void display() {
    if (top == -1) {
      System.out.println("No elements to be displayed , Stack is EMPTY");
    }
    else {
      System.out.println("TOP--->");
      for (int i=top; i>=0; i-- ) {
        System.out.println(s[i] + "\t");
      }
      //System.out.println();
    }
  }

  //----main()----
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    System.out.println("Enter the size of Stack :");
    int n = scan.nextInt();

    stack st = new stack(n);

    int choice;
    do {
      System.out.println("\nEnter:\n1. Push\n2. Pop\n3. Peep\n4. Display");
			choice = scan.nextInt();
			switch(choice)
			{
        case 1: System.out.println("\nEnter an element to push");
				        int element = scan.nextInt();
				        st.push(element);
				        break;

				case 2: st.pop();
					      break;

				case 3: st.topItem();
					      break;

				case 4: st.display();
					      break;

				default: System.out.println("Wrong choice. Exitting!");
					       break;
			}
    } while (choice >= 1 && choice <= 4);
  }
}
