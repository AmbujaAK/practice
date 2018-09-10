#include <iostream>
using namespace std;

int check(int n){
    int x = n | (n-1);

    return x;
    //return x & (x+1);
}

int main(){
    int n;
    cin>>n;

    int ans = check(n);
    cout<<ans<<endl;
}