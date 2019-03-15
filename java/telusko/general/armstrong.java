import java.util.Scanner;

/* 
examples ...
153
370
*/

class armstrong {

    public static boolean isArmstrong(int n) {
        int sum = 0;
        int temp = n;
        while(temp > 0){
            int rem;
            rem = temp % 10;
            temp = temp / 10;

            sum += Math.pow(rem, 3);
        }

        if(sum == n)
            return true;
        return false;
    }
    public static void main(String[] args) {
        System.out.println("Enter a number : ");
        Scanner scan = new Scanner(System.in);

        int num;
        num = scan.nextInt();

        if(isArmstrong(num))
            System.out.println("TRUE");
        else
            System.out.println("FALSE");
        scan.close();
    }
}