 // Defination :
 // same function with DIFFERENT PARAMETER but SAME RETURN TYPE in same class 

/**
 * Method Overloading
 * Early Binding
 * Static Binding
 * Compile Time Polymorphism
 */

class Demo {
    public static void main(String[] args) {
        Add obj = new Add();

        System.out.println(obj.add());
        System.out.println(obj.add(20));
        System.out.println(obj.add(23.8));
        System.out.println(obj.add(30,40));
    }
}

class Add {
    int x = 10;
    public int add(){
        return x;
    }
    public int add(int a){
        return x + a;
    }
    public int add(double a){
        return x + (int)a;
    }
    public int add(int a, int b){
        return x + a + b;
    }
}
