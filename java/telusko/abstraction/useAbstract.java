class useAbstract {
    public static void repair(Mobile mobile){
        mobile.call();
        mobile.message();
    }
    public static void main(String[] args) {
        repair(new Samsung());
        repair(new Motorola());
    }
}
