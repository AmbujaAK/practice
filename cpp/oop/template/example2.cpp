#include <iostream>
using namespace std;

template<class T1, class T2> void display(T1 a, T2 b){
    cout<<"showing 1st ... :: "<<a<<endl;
    cout<<"showing 2nd ... :: "<<b<<endl;
}

int main(){
    display(3,4.5);
}