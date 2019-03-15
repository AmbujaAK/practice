import java.util.Scanner;

class palindrome {
    public static boolean isPalindrome(int num){

        int arr[] = new int[10];
        int i=0;
        while(num > 0) {
            int temp;
            temp = num % 10;
            num = num / 10;

            arr[i++] = temp;
        }

        int size = i;
        int l = 0;
        int r = size - 1;

        while(l < r) {
            if(arr[l] != arr[r]){
                return false;
            }else{
                l++;
                r--;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        System.out.println("Enter any number : ");
        Scanner scan = new Scanner(System.in);

        int num;
        num = scan.nextInt();

        if(isPalindrome(num) == true){
            System.out.println("true");
        }else{
            System.out.println("false");
        }
        scan.close();
    }
}