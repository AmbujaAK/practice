/*
   *              *
  ***            ***
 *****          *****
*******        *******
*******         *****
 *****           ***
  ***             *
   *
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // upper part
    for(int i=n; i>0; i--){
        // printing blank
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        // printing left shape
        for(int j=1; j<=n; j++){
            if(i <= j)
                cout<<"*";
        }
        // printing right shape
        for(int j=n; j>0; j--){
            if(i < j)
                cout<<"*";
        }
        cout<<endl;
    }
    
    // lower part
    for(int i=1; i<=n; i++){ // make i=2 if you want to making middle line common to upper and lower part.
        // printing blank
        for(int a=1; a<=i; a++){
            cout<<" ";
        }
        // printing left shape
        for(int b=n; b>0; b--){
            if(i <= b)
                cout<<"*";
        }
        // printing right shape
        for(int c=1; c<=n; c++){
            if(i < c)
                cout<<"*";
        }
        cout<<endl;
    }
}