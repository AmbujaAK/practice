// runtime polymorphism

#include <iostream>  
using namespace std;  

// single
class Animal {  
    public:
        string color = "Black";
        void eat(){    
        cout<<"Animal is Eating.";    
    }      
};

class Dog: public Animal {    
    public:
        string color = "Blue"; // overriding black color
        void eat() {    
            cout<<"Dog is Eating...";    
        }    
};

// double
class Shape {
    public:
        virtual void draw(){
            cout<<"\nDrawing...";
        }
};

class Rectangle : public Shape {
    public:
        void draw(){
            cout<<"\nRectangle drawing ...";
        }
};

class Circle : public Shape {
    public:
        void draw(){
            cout<<"\nCircle drawing ...";
        }
};

int main() {  
    // single
    Dog dog = Dog();
    dog.eat();
    cout<<"\nColor is : "<<dog.color<<endl;
    
    // double
    Rectangle rec = Rectangle();
    Circle ci = Circle();

    rec.draw();
    ci.draw();
    
    return 0;  
}  