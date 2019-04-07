import java.util.LinkedList;
import java.util.Queue;

class FindMaxLevelSum {
    
    public static int solve(Node root){
        if(root == null)
            return 0;
        
        int res = root.getData();

        Queue<Node> queue = new LinkedList<Node>();
        queue.add(root);

        while(!queue.isEmpty()){
            int count = queue.size();

            int sum = 0;
            while(count > 0){
                Node temp = queue.peek();
                queue.poll();

                sum = sum + temp.getData();

                if(temp.left != null)
                    queue.add(temp.left);
                
                if(temp.right != null)
                    queue.add(temp.right);
                count--;
            }
            res = Math.max(sum, res);
        }
        return res;
    }
    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        new CreateTree(tree);

        int res = solve(tree.root);
        System.out.println("\nSum :: " + res);
    }
}