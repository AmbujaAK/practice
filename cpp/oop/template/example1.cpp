#include <iostream>
using namespace std;

template<class T> T add(T &a, T &b){
    T result = a + b;
    return result;
}

int main(){
    int a, b;
    cout<<"Enter two integer value :: ";
    cin>>a>>b;

    float x,y;
    cout<<"\nEnter two float value ::";
    cin>>x>>y;

    cout<<"Integer sum = "<<add(a,b)<<endl;
    cout<<"Float sum = "<<add(x,y)<<endl;
}