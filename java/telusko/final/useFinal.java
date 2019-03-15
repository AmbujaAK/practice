/**
 * USES ::
 * 1. To prevent from overriding METHODS in derived class
 * 2. To make the variables constant , CAN'T be changed
 * 3. FINAL CLASS prevent from inherit
 */
class useFinal {
    public static void main(String[] args) {
        B obj = new B();
        obj.show();

        System.out.println("In B " + obj.i);
        obj.printI();
    }
}

class A {
    final int i = 10;
    final public void show(){
        System.out.println("In A show");
    }
}

class B extends A {
    int i = 20;
    public void printI(){
        System.out.println("In B from A " + super.i);
    }
}