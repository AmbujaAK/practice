import java.util.Scanner;

class pattern {

    public static void pattern1(int n){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                int k = i+j-1;
                if(k > n)
                    System.out.print(k % n);
                else
                    System.out.print(k);
            }
            System.out.println();
        }
    }

    public static void pattern2(int n){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                if((i+j) % 2 == 0)
                    System.out.print("1");
                else
                    System.out.print("0");
            }
            System.out.println("");
        }
    }
    public static void pattern3(int n){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                System.out.print(i);
            }
            System.out.println("");
        }
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n;
        n = s.nextInt();

        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i==1 || i==n || j==1 || j==n){
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println("");
        }
        s.close();

        System.out.println("pattern 1 : ");
        pattern1(n);

        System.out.println("pattern 2 : ");
        pattern2(n);

        System.out.println("pattern 3 : ");
        pattern3(n);
    }
}