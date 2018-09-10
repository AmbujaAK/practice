#include<iostream>
using namespace std;

void solve(int a[],int n1, int b[], int n2, int temp[], int N){
    int i=0,j=0,k=0;
    while(i < n1 && j < n2){
        if(a[i] < b[j])
            temp[k++] = a[i++];
        else
            temp[k++] = b[j++];
    }
    while(i < n1)
        temp[k++] = a[i++];
    while(j < n2)
        temp[k++] = b[j++];
}

void display(int a[],int N){
    for(int i=0; i<N; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    int n1;
    cin>>n1;
    int a[n1];
    for(int i=0; i<n1; i++)
        cin>>a[i];
    int n2;
    cin>>n2;
    int b[n2];
    for(int i=0; i<n2; i++)
        cin>>b[i];

    int temp[n1+n2];
    solve(a,n1,b,n2,temp,n1+n2);
    display(temp,n1+n2);
}