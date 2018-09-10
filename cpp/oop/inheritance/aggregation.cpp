// Has-A relationship

#include <iostream>  
using namespace std;  
class Address {
    public:
        string house_no;
        string locality;
        string region;
        string city;
        string state;
        int pin;
        // constructor
        Address(string house_no,string locality, string region, string city, string state,int pin){    
            this->house_no = house_no;
            this->locality = locality;
            this->region = region;
            this->city = city;    
            this->state = state;    
            this->pin = pin;
        }    
};

class Employee {
    private:
        Address* address;  //Employee HAS-A Address   
    public:
        int id;    
        string name;
        // construtor    
        Employee(int id, string name, Address* address){    
            this->id = id;    
            this->name = name;    
            this->address = address;    
        }    
        void display(){
            cout<<"\nId : "<<id;
            cout<<"\nName : "<<name;
            cout<<"\nAddress : "<<
            address->house_no<<" "<<address->locality<<
            "\n\t  "<<address->region<<
            "\n\t  "<<address->city<<
            "\n\t  "<<address->state<<
            "\n\t  "<<address->pin<<endl;    
        }    
};   
int main(){  
    Address a1= Address("RA-283", "Nabapally", "salt lake Sec-4","Kolkata","West Bengal",700105);    
    Employee e1 = Employee(74,"Ambuj Kumar",&a1);    
    e1.display();

    return 0;  
}