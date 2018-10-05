/*
 ***   ***
***** *****
***********
 *********
  *******
   *****
    ***
     *
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // n = 5;
    // upper part
    for(int i=n; i>0; i--){
        // left part..............................
        for(int j=0; j<=i; j++){
            cout<<" ";
        }
        for(int j=0; j<n; j++){
            if(i < j)
                cout<<"*";
        }
        for(int j=n; j>0; j--){
            if(i < j)
                cout<<"*";
        }

        // middle part............................
        for(int a=2; a<=i; a++){
            cout<<" ";
        }
        // printing left shape
        for(int b=n; b>0; b--){
            if(i > b)
                cout<<"";
        }
        // printing right shape
        for(int c=2; c<=n; c++){
            if(i < c)
                cout<<"";
        }
        
        // right part............................
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        
        for(int j=1; j<n; j++){
            if(i < j)
                cout<<"*";
        }
        for(int j=n; j>0; j--){
            if(i < j)
                cout<<"*";
        }
        cout<<endl;
    }
    // lower part
    int N = 2*n - 1;
    for(int i=1; i<=N; i++){
        // printing blank
        for(int a=1; a<=i; a++){
            cout<<" ";
        }
        // printing left shape
        for(int b=N; b>0; b--){
            if(i <= b)
                cout<<"*";
        }
        // printing right shape
        for(int c=1; c<=N; c++){
            if(i < c)
                cout<<"*";
        }
        cout<<endl;
    }
}