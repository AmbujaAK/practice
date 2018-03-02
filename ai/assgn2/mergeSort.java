import java.io.*;
import java.util.Scanner;

class mergeSort{
	
	public static void merge_asc(int arr[],int l,int m,int r)
	{
		int n1,n2;
	 	n1=m-l+1;
		n2=r-m;
		int L1[]=new int[n1];
		int L2[]=new int[n2];
		
		for(int i=0;i<n1;i++)
			L1[i]=arr[l+i];
		for(int i=0;i<n2;i++)
			L2[i]=arr[m+1+i];
		int i=0;
		int j=0;
		int k=l;
		while(i<n1 && j<n2)
		{
			if(L1[i]>L2[j])
				arr[k++]=L2[j++];
			else if(L1[i]<=L2[j])
				arr[k++]=L1[i++];
		}
		while(i<n1)
		{
			arr[k++]=L1[i++];
		}
		while(j<n2)
		{
			arr[k++]=L2[j++];
		}
	}

	
	public static void mergeSort_asc(int arr[],int l,int r)
	{
		if(l<r)
		{
			int m=l+(r-l)/2;
			mergeSort_asc(arr,l,m);
			mergeSort_asc(arr,m+1,r);
			
			merge_asc(arr,l,m,r);
		}
	}

	public static void merge_desc(int arr[],int l,int m,int r)
        {
                int n1,n2;
                n1=m-l+1;
                n2=r-m;
                int L1[]=new int[n1];
                int L2[]=new int[n2];

                for(int i=0;i<n1;i++)
                        L1[i]=arr[l+i];
                for(int i=0;i<n2;i++)
                        L2[i]=arr[m+1+i];
                int i=0;
                int j=0;
                int k=l;
                while(i<n1 && j<n2)
                {
                        if(L1[i]<L2[j])
                                arr[k++]=L2[j++];
                        else if(L1[i]>=L2[j])
                                arr[k++]=L1[i++];
                }
                while(i<n1)
                {
                        arr[k++]=L1[i++];
                }
                while(j<n2)
                {
                        arr[k++]=L2[j++];
                }
        }

	public static void mergeSort_desc(int arr[],int l,int r)
        {
                if(l<r)
                {
                        int m=l+(r-l)/2;
                        mergeSort_desc(arr,l,m);
                        mergeSort_desc(arr,m+1,r);

                        merge_desc(arr,l,m,r);
                }
        }
	

	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int n;
		
		System.out.println("Enter number of integer elements");
		n=scan.nextInt();
		
		int arr[]=new int[n];
		System.out.println("Enter "+ n +" integer elements");
		for(int i=0;i<n;i++)
			arr[i]=scan.nextInt();
		
		System.out.println("After merge sort");

		mergeSort_asc(arr,0,n-1);

		System.out.print("Ascending Order : ");
		for(int i=0;i<n;i++)
			System.out.print(arr[i] + " ");
		System.out.println();

		mergeSort_desc(arr,0,n-1);
		
		System.out.print("Descending Order : ");
                for(int i=0;i<n;i++)
                        System.out.print(arr[i] + " ");
                System.out.println();

	}
}
