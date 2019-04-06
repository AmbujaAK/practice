import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();

        Scanner scan = new Scanner(System.in);
        int n;
        System.out.print("Enter the number of nodes :: ");
        n = scan.nextInt();

        for(int i=0; i<n; i++){
            int temp = scan.nextInt();

            if(tree.root == null)
                tree.root = new Node(temp);
            else
                tree.insertByLevelOrder(tree.root,temp);
        }

        System.out.print("\nPreOrder Traversal :: ");
        tree.PreOrder(tree.root);

        System.out.print("\nInOrder Traversal :: ");
        tree.InOrder(tree.root);

        System.out.print("\nPostOrder Traversal :: ");
        tree.PostOrder(tree.root);
    }
}