def BST_size(root):
    if root is None:
        return -1
    if root is not None:
        if root.left is not None:
            return 1 + BST_size(root.left)
        if root.right is not None:
            return 1 + BST_size(root.right)

def print_BST_size(root):
    size = BST_size(root)
    if size == -1:
        print ("size -1 (Null value in root)")
    else:
        print ("size", size)

def main():
    count = -1
    root = int(input())
    if root is not None:
        if root.left is not None:
            count += BST_size(root.left)
        if root.right is not None:
            count += BST_size(root.right)
    return count

if __name__ == '__main__':
    main()
