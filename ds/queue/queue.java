import java.util.*;

class queue {
  private int front, rear,size,q[];

  // constructor
  queue (int n) {
    size = n;
    front = -1;
    rear = -1;
    q = new int[size];
    for (int i=0; i < size; i++) {
      q[i] = 0;
    }
  }

  private void insert(int item) {
    if (rear == (size-1)) {
      System.out.println("Queue overflow");
    }
    else if (front == -1 && rear == -1) {
      front = 0;
      rear = 0;
      q[rear] = item;
    }
    else {
      rear ++;
      q[rear] = item;
    }
  }

  private void delete() {
    if (front == -1 && rear == -1) {
      System.out.println("Queue underflow");
    }
    else if (front == rear) {
      System.out.println("Item deleted is : " + q[front]);
      front = -1;
      rear = -1;
    }
    else {
      System.out.println("Item deleted is : " + q[front]);
      front--;
    }
  }

  private void display() {
    if (front == -1 && rear == -1) {
      System.out.println("Queue is EMPTY");
    }
    else {
      System.out.println("Elements of Queue : \nfront---->");
      for (int i=front; i < size; i++) {
        System.out.println(q[i] + "\t");
      }
      System.out.println("<--- rear");
    }
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the size of Queue :")
    int n = sc.nextInt();

    queue q1 = new queue(n);

    int choice ;
    do {
      System.out.println("\nEnter:\n1. Insert\n2. Delete\n3. Display");
			choice = sc.nextInt();
			switch(choice) {
				case 1: System.out.println("\nEnter an element to insert");
					      int element = sc.nextInt();
					      q1.insert(element);
					      break;

				case 2: q1.delete();
					      break;

				case 3: q1.display();
					      break;

				default: System.out.println("Wrong choice. Exitting.");
					       break;
       }
    } while (choice >= 1 && choice <= 3);
  }
}
