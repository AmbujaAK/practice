// we can not use non-static variables in static methods.

public class A {
    int num1;
    static int num2;

    public A(){
        num1 = 10;
        num2 = 20;
    }
    public void show(){
        System.out.println("method is called !");
    }
}