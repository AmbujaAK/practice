// to minimize memory utilization

#include <iostream>
using namespace std;

class Students {
    public:
        string name;
        int roll;
        static int count;

        Students(string name,int roll){
            this->name = name;
            this->roll = roll;
            count++;
        }

        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Roll : "<<roll<<endl;
        }
};

int Students:: count = 0;

int main(){
    Students s1 = Students("Ambuj",74);
    Students s2 = Students("Rahul",49);
    Students s3 = Students("Ritwick",51);
    s1.display();
    s2.display();
    s3.display();

    cout<<"\nTotal students : "<<Students::count;
}