class useInterface {
    public static void main(String[] args) {
        A obj1 = new C(); // A is reference
        obj1.call();
        obj1.song();

        B obj2 = new C(); // B is reference
        obj2.download();
        obj2.msg();

        // ERROR ...
        //obj1.download();
        //obj2.call();
    }
}