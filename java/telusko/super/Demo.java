/**
 * SUPER() -> as methods for constructor
 */

class Demo {
    public static void main(String[] args) {
        System.out.println("Object A is created ...");
        A objA = new A();
        System.out.println("Object B is created ...");
        B objB = new B();
        // on creating object B (Object of Subclass) , both A() and B() constructor will be called.
        // this is because of  hidden super();
        System.out.println("WITH PARAMETER ............");
        // with parameter.
        System.out.println("Object A is created ...");
        A objA1 = new A(1);
        System.out.println("Object B is created ...");
        B objB1 = new B(1);
    }
}
class A {
    public A(){
        //super();
        System.out.println("In Const. A ");
    }
    public A(int i){
        System.out.println("In Const. A with param");
    }
}
class B extends A{
    public B(){
        //super();
        System.out.println("In Const. B ");
    }
    public B(int i){
        // to call constructor with parameter of base class we use super().
        super(i); // run with commenting this line again.
        System.out.println("In Const. B with param");
    }
}