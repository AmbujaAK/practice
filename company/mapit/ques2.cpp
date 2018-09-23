#include <iostream>
using namespace std;

void solve(int n){
    int s;
    s = n-1;
    int a = 1;

    while(s!=0)
    {
        cout<<" ";
        s--;
    }
    cout<<a<<endl;
    s = n-2;
    for (int i=1; i<n; i++){
        a = 1;
        for(int k = 1; k<=s; k++){
            cout<<" ";
        }
        for(int j=0; j<=i*2; j++){
            if(j<i){
                cout<<a;
                a++;
            }
            else{
                cout<<a;
                a--;
            }
        }
        cout<<endl;
        s--;
    }

    for (int i = n-1; i>=1; i--){
        s = n-i;
        a = 1;
        for (int k=1; k<=s; k++){
            cout<<" ";
        }
        for (int j=1; j<=i*2-1; j++){
            if(j<i){
                cout<<a;
                a++;
            }
            else{
                cout<<a;
                a--;
            }
        }
        cout<<endl;
        s--;
    }
}

int main(){
    int n;
    cin>>n;

    solve(n);
}