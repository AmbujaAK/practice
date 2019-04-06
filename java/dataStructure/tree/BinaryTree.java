import java.util.Queue;
import java.util.LinkedList;

class BinaryTree {
    Node root;

    BinaryTree(){
        root = null;
    }

    BinaryTree(int data){
        root = new Node(data);
    }

    /**
     * PreOrder Traversal
     */
    public void PreOrder(Node root){
        if(root == null)
            return;
        System.out.print(root.getData() + " ");
        PreOrder(root.left);
        PreOrder(root.right);
    }

    /**
     * InOrder traversal
     */
    public void InOrder(Node root){
        if(root == null)
            return;
        InOrder(root.left);
        System.out.print(root.getData() + " ");
        InOrder(root.right);
    }

    /**
     * PostOrder traversal
     */
    public void PostOrder(Node root){
        if(root == null)
            return;
        PostOrder(root.left);
        PostOrder(root.right);
        System.out.print(root.getData() + " ");
    }

    /**
     * Level Order Insertion
     */
    public void insertByLevelOrder(Node root, int data){

        Queue<Node> queue = new LinkedList<Node>();
        queue.add(root);

        while(!queue.isEmpty()){
            root = queue.peek();
            queue.remove();

            if(root.left == null){
                root.left = new Node(data);
                break;
            } else {
                queue.add(root.left);
            }

            if(root.right == null){
                root.right = new Node(data);
                break;
            } else {
                queue.add(root.right);
            }
        }
    }

    /**
     * Binary Tree Insertion
     */
    public Node binaryTreeInsertion(Node root, int data){
        if(root == null)
            return (new Node(data));
        else{
            if(data <= root.getData())
                root.left = binaryTreeInsertion(root.left, data);
            else
                root.right = binaryTreeInsertion(root.right, data);
        }
        return root;
    }
}