class Node {
    private int data;
    Node left;
    Node right;

	Node(int data) {
        this.data = data;
        left = null;
        right = null;
	}

	public int getData() {
		return this.data;
	}

	public void setData(int data) {
		this.data = data;
	}
}