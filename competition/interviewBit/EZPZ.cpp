#include<iostream>
#include<cmath>
using namespace std;

int solve(int A){
    int flag = 0;
    // check for prime .
    for(int i=2; i<=sqrt(A); ++i){
        if(A % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        return 1;
    // check for odd and even case
    if(A % 2 == 0)
        return 2;
    else {
        flag = 0;
        // check for A-2 is prime or not.
        for(int i=2; i<=sqrt(A-2); ++i)
            if((A-2) % i == 0){
                flag = 1;
                break;
            }
        if(flag == 0)
            return 2;
        else
            return 3;
    }
}

int main(){
    int num;
    cin>>num;

    int ans = solve(num);
    cout<<ans<<endl;
}