// methods and construction can be overloaded.

#include <iostream>
using namespace std;

class Cal {
    public:
        int add(int a,int b){
            return a+b;
        }
        int add(int a,int b,int c){
            return a+b+c;
        }
};

int main(){
    Cal c = Cal();
    cout<<c.add(2,3)<<endl;
    cout<<c.add(1,2,3)<<endl;
}