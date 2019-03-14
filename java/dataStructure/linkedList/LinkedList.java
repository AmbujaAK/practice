class LinkedList {
    /**
     * 1. PrintList
     * 2. Insertion At Beginning
     * 3. Insertion At Middle
     * 4. Insertion At End
     * 5. Deletion At Beginning
     * 6. Deletion At Middle
     * 7. Deletion At End
     * 8. Clear the list
     */
    Node head;
    private static int length;

    LinkedList(){
        head = null;
    }

    /**
     * Insertion At Beginning
     */
    public static LinkedList InsertAtBegin(LinkedList list,int data){
        length++;
        Node newNode = new Node(data);

        if(list.head == null){
            list.head = newNode;
        } else {
            newNode.setNext(list.head);
            list.head = newNode;
        }
        System.out.println("** Node inserted !! **");
        return list;
    }

    /**
     * Insertion At Midddle for given position
     */
    public static LinkedList InsertAtMiddle(LinkedList list,int data, int pos){
        // case 1 : pos less than length.
        if(pos > length){
            System.out.println("#WARNING :: POSITION NOT FOUND");
            return list;
        }

        if(list.head == null){
            System.out.println("List is empty");
        } else {
            length++;
            Node temp = list.head;
            Node newNode = new Node(data);
            if( pos == 0){
                newNode.setNext(list.head);
                list.head = newNode;
                return list;
            }
            for(int i=1; i<pos; i++){
                temp = temp.getNext();
            }

            newNode.setNext(temp.getNext());
            temp.setNext(newNode);
        }
        System.out.println("** Node inserted !! **");
        return list;
    }
    /**
     * Insertion At End
     */
    public static LinkedList InsertAtEnd(LinkedList list, int data){
        Node newNode = new Node(data);

        if(list.head == null){
            System.out.println("head is null");
            list.head = newNode;
        } else{
            Node temp = list.head;
            while( temp.getNext() != null)
                temp = temp.getNext();
            
            temp.setNext(newNode);
        }
        System.out.println("** Node inserted !! **");
        return list;
    }

    /**
     * Deletion From Beginning
     */
    public static LinkedList DeleteFromBegin(LinkedList list){
        if(list.head == null){
            return list;
        }

        Node temp = list.head;
        list.head = temp.getNext();
        
        length--;
        return list;
    }

    /**
     * Deletion From Middle
     * Thres cases ::
     * 1. index = 0
     * 2. index > 0 and < size of list
     * 3. index > size of list
     */
    public static LinkedList DeletionFromMiddle(LinkedList list, int pos){
        Node currNode = list.head;
        Node prev = null;

        // case 1:
        if(pos == 0 && currNode != null){
            list.head = currNode.getNext();

            length--;
            return list;
        }
        // case 2:
        int counter = 0;
        while(currNode != null){
            if(counter == pos){
                prev.setNext(currNode.getNext());
                break;
            }else{
                prev = currNode;
                currNode = currNode.getNext();
                counter++;
            }
        }
        // case 3:
        if (currNode == null){
            length++;
            System.out.println("****   Postion NOT FOUND !!  ****");
        }
        
        length--;
        return list;
    }

    /**
     * Deletion From End
     */
    public static LinkedList DeletionFromEnd(LinkedList list){
        Node currNode = list.head;
        Node prevNode = null;

        if(list.head == null){
            System.out.println("Enmpty List");
            return list;
        }
        while( currNode.getNext() != null) {
            prevNode = currNode;
            currNode = currNode.getNext();
        }
        prevNode.setNext(null);

        length--;
        return list;
    }
    /**
     * Print the List
     */
    public static void PrintList(LinkedList list){
        Node temp = list.head;
        if(list.head == null){
            System.out.println("***********************************");
            System.out.println("*          List is EMPTY          *");
            System.out.println("***********************************");
            return;
        }
        System.out.print("List :: ");
        while(temp != null){
            System.out.print(temp.getData() + " ");
            temp = temp.getNext();
        }
    }
    /**
     * Clear the list
     */
    public static void clearList(LinkedList list){
        list.head = null;
        System.out.println("***********************************");
        System.out.println("*   List cleared succesfully !!   *");
        System.out.println("***********************************");
    }
    /**
     * length of List
     */
    public static void lengthOfList(){
        System.out.println(length);
    }
}