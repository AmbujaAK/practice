 // Defination :
 // same function with SAME PARAMETER in different class 

/**
 * Method Overriding
 * Late Binding
 * Dynamic Binding 
 * Runtime Polymorphism
 */

class Demo2 {
    public static void main(String[] args) {
        B obj = new B();
        obj.show();    
    }
}

class A {
    public void show(){
        System.out.println("In A class ");
    }
}

class B extends A {
    public void show(){
        System.out.println("In B class ");
    }
}