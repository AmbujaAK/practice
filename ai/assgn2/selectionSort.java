import java.io.*;
import java.util.Scanner;

class selectionSort { 
    public static void swap(int arr[],int a,int b){
	int temp;
	temp=arr[a];
	arr[a]=arr[b];
	arr[b]=temp;
    }

	/*ascending order sorting */
    public static void asc_sort(int arr[] ){
        int N = arr.length;
        int i, j, pos;
        for (i = 0; i < N-1; i++){
            pos = i;
            for (j = i+1; j < N; j++) {
                if (arr[j] < arr[pos]) {
                    pos = j;
                }
            }
		swap(arr,i,pos);
        }        
    }
	/*descending order sorting */
    public static void desc_sort(int arr[] ){
        int N = arr.length;
        int i, j, pos;
        for (i = 0; i < N-1; i++){
            pos = i;
            for (j = i+1; j < N; j++) {
                if (arr[j] > arr[pos]) {
                    pos = j;
                }
            }
            swap(arr,i,pos);
	}
    }

    public static void main(String[] args)
    {

        Scanner scan = new Scanner( System.in );
        int n, i;
       
        System.out.println("Enter number of integer elements");
        n = scan.nextInt();
    
        int arr[] = new int[ n ];

        System.out.println("\nEnter "+ n +" integer elements");
        for (i = 0; i < n; i++)
            arr[i] = scan.nextInt();
	
	/* ascending order */
        asc_sort(arr);

        System.out.println("\nElements in ascending order: ");        

        for (i = 0; i < n; i++)
            System.out.print(arr[i]+" ");            

        System.out.println();
	
	/*descending order */
	desc_sort(arr);

	System.out.println("\nElements in descending order: ");

        for (i = 0; i < n; i++)
            System.out.print(arr[i]+" ");

        System.out.println();
            
    }
}