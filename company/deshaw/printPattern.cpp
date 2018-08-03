#include<iostream>
using namespace std;

void printOdd(int n){
    int size = 2 * n - 1;
    // Upper half
    for(int i=0; i<(size/2) + 1; ++i){
        int m = n;
        for(int j=0; j<i; ++j){
            cout<<m<<" ";
            m--;
        }
        for(int k=0; k<size-2*i; ++k)
            cout<<n-i<<" ";
        m = n - i + 1;
        for(int l = 0; l<i; ++l)
            cout<<m++<<" ";
        cout<<endl;
    }

    // Lower half
    for(int i=(size/2) - 1; i>=0; --i){
        int m = n;
        for(int j=0; j<i; ++j){
            cout<<m<<" ";
            m--;
        }
        for(int k=0; k<size-2*i; ++k)
            cout<<n-i<<" ";
        m = n - i + 1;
        for(int l = 0; l<i; ++l)
            cout<<m++<<" ";
        cout<<endl;
    }
}

void printEven(int n){
    int size = 2 * n;
    // Upper half
    for(int i=0; i<(size/2)+1 ; ++i){
        int m = n;
        for(int j=0; j<i; ++j){
            cout<<m<<" ";
            m--;
        }
        for(int k=0; k<size-2*i; ++k)
            cout<<n-i<<" ";
        m = n - i + 1;
        for(int l = 0; l<i; ++l)
            cout<<m++<<" ";
        cout<<endl;
    }

    // Lower half
    for(int i=(size/2) - 2; i>=0; --i){
        int m = n;
        for(int j=0; j<i; ++j){
            cout<<m<<" ";
            m--;
        }
        for(int k=0; k<size-2*i; ++k)
            cout<<n-i<<" ";
        m = n - i + 1;
        for(int l = 0; l<i; ++l)
            cout<<m++<<" ";
        cout<<endl;
    }
}

int main(){
    cout<<"\nChoose the type : \n\n1.odd\n2.even"<<endl;
    int ch,n;
    cin>>ch;
    switch(ch){
        case 1 :
            cout<<"Enter the size : "<<endl;
            cin>>n;
            printOdd(n);break;
        case 2 :
            cout<<"Enter the size : "<<endl;
            cin>>n;
            printEven(n);break;
        default :
            cout<<"Wrong input , TRY AGAIN !!";

    }

    return 0;
}