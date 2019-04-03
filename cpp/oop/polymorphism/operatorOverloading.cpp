// The advantage of Operators overloading is to perform different operations on the same operand.

#include <iostream>
using namespace std;

class Test {
    private:
        int num;
    public:
        Test(){
            num = 0;
        }
        void operator ++(){
            num = num + 2;
        }
        void operator --(){
            num = num - 2;
        }
        void print(){
            cout<<"\nNumber is : "<<num<<endl;
        }
};

int main(){
    Test t;
    cout<<"\nBefore Overloading : "<<endl;
    t.print();
    ++t;
    cout<<"\nAfter Overloading : "<<endl;
    t.print();

    return 0;
}