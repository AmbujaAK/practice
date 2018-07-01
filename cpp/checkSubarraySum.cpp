#include <bits/stdc++.h>

using namespace std;

int checkSum(int arr[],int n,int x){
    int sum,i,j,l,r;
    int flag = 0;
    sort(arr,arr+n);
    for(int i=0; i<n-3; i++){
        for(int j=i+1; j<n-2; j++){
            l = j+1;
            r = n-1;

            while(l<r){
                sum = arr[i] + arr[j] + arr[l] + arr[r];

                if(sum == x){
                flag = 1;
                break;
                }else if(sum > x){
                    r--;
                }else{
                    l++;
                }
            }
        }
    }

    return flag;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n;
	    int *arr = new int[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    cin>>x;
	    int ans=0;
	    int flag =0;

	    ans = checkSum(arr,n,x);
	    if(ans)
	        cout<<1;
	   else
	        cout<<0;

	   delete []arr;
	   cout<<endl;
	}
	return 0;
}
