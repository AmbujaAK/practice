/**
 * SUPER() -> as variables
 */

class SuperVariable {
    public static void main(String[] args) {
        BB obj = new BB();

        obj.show();
        obj.abc();
    }
}

class AA {
    int i = 10;

    public void abc(){
        System.out.println("AA abc");
    }
}

class BB extends AA {
    int i = 20;

    public void abc(){
        super.abc(); // to use method abc() of base class.
        System.out.println("BB abc");
    }
    public void show(){
        System.out.println(super.i); // to use value of i from base class.
    }
}