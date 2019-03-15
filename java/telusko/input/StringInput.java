import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

class StringInput {
    public static void main(String[] args) throws IOException{
        System.out.println("Enter a number :: ");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int s = Integer.parseInt(br.readLine());
        System.out.println("Number :: " + s);

        System.out.println("Enter another number :: ");
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        System.out.println("Another :: " + x);
        
        scan.close();
    }
}