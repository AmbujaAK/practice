import java.util.Scanner;

class variables {
    public static void main(String[] args) {
        System.out.println("Enter two number : ");
        int a,b;

        Scanner scan = new Scanner(System.in);
        a = scan.nextInt();
        b = scan.nextInt();

        int sum = a + b;
        System.out.println("Addition : " + sum);
        scan.close();
    }
}