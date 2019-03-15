import java.util.Scanner;

class prime {
    public static boolean isPrime(int n) {
        for(int i=2; i<Math.sqrt(n); i++){
            if(n % i == 0)
                return false;
        }
        return true;
    }
    public static void main(String[] args) {
        System.out.println("Enter a number : ");
        Scanner scan = new Scanner(System.in);
        int n;
        n = scan.nextInt();

        if(isPrime(n))
            System.out.println("PRIME NUMBER");
        else
            System.out.println("NOT PRIME NUMBER");
        scan.close();
    }
}