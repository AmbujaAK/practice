class Animal {
    private String name;

    public void setName(String name){
        this.name = name;
    }
    public String getName(){
        return name;
    }
    public void makeSound(){
        System.out.println(getName() +" make sound !");
    }
    public void move(){
        System.out.println(getName() + " is moving ...");
    }
    public void sleep(){
        System.out.println(getName() + " is sleeping ...");
    }
}