class useStatic {
    public static void main(String args[]) {
    
        A obj1 = new A();
        obj1.num1 = 30;
        System.out.println(obj1.num1 + " " + A.num2);
        obj1.show();
    }
}