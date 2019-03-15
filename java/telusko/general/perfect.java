import java.util.Scanner;

class perfect {
    public static boolean isPerfect(int n) {
        int sum = 0;
        for(int i=1; i<=n/2; i++){
            if(n % i == 0)
                sum += i;
        }

        if(n == sum)
            return true;
        return false;
    }
    public static void main(String[] args) {
        System.out.println("Enter a number : ");
        Scanner scan = new Scanner(System.in);

        int n;
        n = scan.nextInt();

        if(isPerfect(n))
            System.out.println("TRUE");
        else
            System.out.println("FALSE");
        scan.close();
    }
}