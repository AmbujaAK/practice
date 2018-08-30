#include <iostream>
using namespace std;

int getPrime(int num){
    int n = num/2;
    int c = 1;
    int prime = 0;
    for (int i=2; i<n*n; i++){
        int flag = 0;
        for(int j=2; j<i; j++){
            //cout<<"j : "<<j<<endl;
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            c++;
            prime = i;
            //cout<<"prime : "<<prime<<endl;
        }
        if (c == n+1)
            return prime;
    }
}

int getFib(int num){
    int n = (num + 1)/2;
    if (n==1 || n==2)
        return 1;
    return getFib(n-2) + getFib(n-1);
}

int main(){
    int n;
    cin>>n;

    if (n % 2 == 0){
        int prime = getPrime(n);
        cout<<"prime : "<<prime<<endl;
    }else {
        int fib = getFib(n);
        cout<<"fib : "<<fib<<endl;
    }
}