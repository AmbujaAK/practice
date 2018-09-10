#include <iostream>
using namespace std;

class Students {
    public:
        string name;
        // constructor
        Students(){
            cout<<"\nStudent object is created "<<endl;
        }
        Students(string name){
            this->name = name;
            cout<<"Name : "<<name;
        }
        // destructor
        ~Students(){
            cout<<"\nStudent object is distroyed "<<endl;
        }
};
int main(){
    Students s1,s2 = Students("Ambuj");
}