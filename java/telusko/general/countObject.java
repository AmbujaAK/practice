class countObject {
    static int counter = 0;
    countObject(){
        counter++;
    }
    public static void main(String[] args) {
        countObject obj1 = new countObject();
        countObject obj2 = new countObject();

        System.out.println(counter);
    }
}