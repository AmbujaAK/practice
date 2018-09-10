#include <iostream>
using namespace std;

class Students {
    private:
        string first_name;
        string last_name;
        int roll_no;
    public:
        // constructor
        Students(){
            cout<<"\nStudent object is created "<<endl;
        }
        // destructor
        ~Students(){
            cout<<"\nStudent object is distroyed "<<endl;
        }

        string getFirstName() {
            return first_name;
        }
        void setFirstName(string first_name) {
            this->first_name = first_name;
        }

        string getLastName() {
            return last_name;
        }
        void setLastName(string last_name) {
            this->last_name = last_name;
        }

        int getRollno() {
            return roll_no;
        }
        void setRollno(int roll_no) {
            this->roll_no = roll_no;
        }
};
int main(){
    Students s1;

    s1.setFirstName("Ambuj");
    s1.setLastName("Kumar");
    s1.setRollno(74);

    cout<<"First name : "<<s1.getFirstName()<<endl;
    cout<<"Last name : "<<s1.getLastName()<<endl;
    cout<<"Roll no. : "<<s1.getRollno()<<endl;
}