import java.util.TreeMap;
import java.util.Vector;
import java.util.Map.Entry;

class verticalLevelTraversal extends CreateTree {
    public static void getVerticalOrder(Node root, int hd, TreeMap<Integer, Vector<Integer>> map){
        if(root == null)
            return ;

        Vector<Integer> vector = map.get(hd);

        if( vector == null){
            vector = new Vector<>();
            vector.add(root.getData());
        } else {
            vector.add(root.getData());
        }

        map.put(hd, vector);

        getVerticalOrder(root.left, hd-1, map);

        getVerticalOrder(root.right, hd+1, map);
    }

    public static void printVerticalOrder(Node root){
        TreeMap<Integer, Vector<Integer>> map = new TreeMap<>();

        int hd = 0;
        getVerticalOrder(root, hd, map);

        for(Entry<Integer, Vector<Integer>> entry : map.entrySet())
            System.out.println(entry.getValue());
    }
    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        new CreateTree(tree);

        System.out.println("\nVertical Order Traversal :: ");
        printVerticalOrder(tree.root);
    }
}