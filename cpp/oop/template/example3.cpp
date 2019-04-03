// Overloading a Function Template

#include <iostream>
using namespace std;

template<class T> void show(T a){
    cout<<"Value of a :: "<<a<<endl;
}

template<class T1, class T2> void show(T1 b, T2 c){
    cout<<"Value of b :: "<<b<<endl;
    cout<<"Value of c :: "<<c<<endl;
}

int main(){
    show(2);
    show(3,4.9);
}