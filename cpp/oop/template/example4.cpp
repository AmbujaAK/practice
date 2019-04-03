// template class

#include <iostream>
using namespace std;

template<class T>
class A {
    T a,b;
    public:
        void add(T a, T b){
            cout<<"addition of two number :: "<<a+b<<endl;
        }
};

int main(){
    int a,b;
    cout<<"Enter two integer value :: ";
    cin>>a>>b;

    float x,y;
    cout<<"Enter two float value :: ";
    cin>>x>>y;

    A<int> ob1;
    A<float> ob2;

    ob1.add(a,b);
    ob2.add(x,y);
}