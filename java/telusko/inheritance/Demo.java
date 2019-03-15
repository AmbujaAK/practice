class Demo {
    public static void main(String[] args) {
        Dog dog = new Dog();
        Cat cat = new Cat();

        dog.setName("Doggiee");
        cat.setName("Cattie");


        dog.bark();
        dog.move();

        cat.meow();
        cat.sleep();
        cat.move();
    }
}