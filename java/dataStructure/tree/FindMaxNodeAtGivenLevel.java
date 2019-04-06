import java.util.Scanner;

class FindMaxNodeAtGivenLevel {
    public static int solve(Node root, int level){
        if(root == null)
            return 0;
        if(level == 0)
            return root.getData();
        
        int a = solve(root.left, level-1);
        int b = solve(root.right, level-1);

        return Math.max(a, b);
    }
    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of nodes :: ");
        int n = sc.nextInt();

        for(int i=0; i<n; i++){
            int x = sc.nextInt();
            
            if( tree.root == null)
                tree.root = new Node(x);
            else
                tree.insertByLevelOrder(tree.root, x);
        }

        System.out.print("\nEnter the level :: ");
        int level = sc.nextInt();
        int res = solve(tree.root, level);

        System.out.println("Ans :: " + res);

        sc.close();
    }
}