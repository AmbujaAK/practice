class FindDepth extends CreateTree {
    public static int findDepth(Node root){
        if(root == null)
            return 0;
        int lDepth = findDepth(root.left);
        int rDefth = findDepth(root.right);

        return lDepth > rDefth ? lDepth + 1 : rDefth + 1;
    }
    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        new CreateTree(tree);
        
        int res = findDepth(tree.root);
        System.out.println("Max Depth :: " + res);
    }
}