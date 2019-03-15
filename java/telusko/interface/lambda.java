interface D {
    void show();
}

class Runner implements D {
    public void show(){
        System.out.println("Running ...");
    }
}

class lambda {
    public static void main(String[] args) {
        D obj1 = () -> System.out.println("In show .."); // direct method without creating Class
        obj1.show();

        D obj2 = new Runner(); // Indirect method after creating class
        obj2.show();
        
    }
}