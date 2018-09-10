#include <iostream>
using namespace std;

class A {
    public:
        virtual void display(){
            cout<<"\nBase class is invoked.";
        }
};

class B : public A {
    public:
        void display(){
            cout<<"\nDerived class is invoked.";
        }
};
int main(){
    A* a;
    B b;
    a = &b;
    a->display();
}