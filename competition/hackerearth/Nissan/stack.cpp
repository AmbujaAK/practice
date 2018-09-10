/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include <iostream>
using namespace std;

int getSum(int arr[], int n, int start, int end){
    int s1 = 0,s2 = 0;
    int i=0;
    while(start > 0){
        s1 += arr[i];
        i++;
        start--;
    }
    int j=0;
    while(end > 0){
        s2 += arr[n-1-j];
        j++;
        end--;
    }
    //cout<<"s1 :"<<s1<<"\ns2 :"<<s2<<endl;
    return (s1 + s2);
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int  i=0; i<n; i++)
        cin>>arr[i];
    int max_sum = 0;
    for(int i=1; i<=k; i++){
        int start = i;
        int end = n-i-k;
        int sum = getSum(arr,n,start,end);
        max_sum = max(sum,max_sum);
    }
    cout<<max_sum<<endl;
}