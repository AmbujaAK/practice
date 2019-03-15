class AnonymousObject {
    public static void main(String[] args) {
        A obj = new A(); // create a object in heap memory with i = 10 and show();
        obj.i = 10;
        obj.show();

        new A().i = 20; // new object is created with i = 20;
        new A().show(); // again new object is created . with i = 0;
    }
}

class A {
    int i ;
    public void show(){
        System.out.println("In A show : " + i);
    }
}