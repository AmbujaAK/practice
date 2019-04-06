import java.util.Scanner;

class CreateTree {
    CreateTree(){}

    CreateTree(BinaryTree tree){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the number of nodes :: ");
        int size = scan.nextInt();
                
        for(int i=0; i<size; i++){
            int temp = scan.nextInt();

            if(tree.root == null)
                tree.root = new Node(temp);
            else
                tree.insertByLevelOrder(tree.root,temp);
        }
        scan.close();
    }
}