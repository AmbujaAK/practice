import java.util.Scanner;

class FindMinMax {
    public static int findMin(Node root){
        Node curr = root;

        while(curr.left != null)
            curr = curr.left;
        return curr.getData();
    }

    public static int findMax(Node root){
        Node curr = root;

        while(curr.right != null)
            curr = curr.right;
        
            return curr.getData();
    }
    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size :: ");
        int n = sc.nextInt();

        for(int i=0; i<n; i++){
            int x = sc.nextInt();
            if(tree.root == null)
                tree.root = new Node(x);
            else
                tree.root = tree.binaryTreeInsertion(tree.root, x);
        }

        int minV = findMin(tree.root);
        System.out.println("Minimum value :: " + minV);

        int maxV = findMax(tree.root);
        System.out.println("Maximum value :: " + maxV);
        
        sc.close();
    }
}