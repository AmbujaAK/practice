class fibonacci {
    public static void main(String[] args) {
        int c = 0;
        int a = 1, b = 1;
        
        while(c < 100){
            c = a + b;
            System.out.print(c + " ");
            a = b;
            b = c;
        }
    }
}