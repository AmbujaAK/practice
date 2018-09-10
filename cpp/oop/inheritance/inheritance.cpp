// Code re-usability
// Is-A relationship

#include <iostream>
using namespace std;

class Animals {
    protected:
        string name;
    private:
        string color;
    public:
        string getName(){
            return name;
        }
        void setName(string nam){
            name = nam;
        }

        string getColor(){
            return color;
        }
        void setColor(string col){
            color = col;
        }

        void makeSound();
        void move();
};

void Animals:: makeSound(){
    cout<<name<<" makes sound"<<endl;
}

void Animals:: move(){
    cout<<name<<" is moving"<<endl;;
}

class Dog: public Animals {
    public:
        void smell(){
            cout<<name<<" can smell"<<endl;;
        }
};

int main(){
    Dog dog;
    dog.setName("zozo");
    dog.setColor("red");

    cout<<"Name is : "<<dog.getName()<<endl;
    cout<<"Color is : "<<dog.getColor()<<endl;
    dog.makeSound();
    dog.move();
    dog.smell();
}