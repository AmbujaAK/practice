// Abstration using abstract class
// Abstarct class is formed by defining pure virtual function in base class 
// and its implementation in its derived class. 

#include <iostream>  
using namespace std;  

// abstract class
class Shape{    
    public:
        virtual void draw() = 0; // pure virtual function    
};    
class Rectangle : Shape {    
    public:
        void draw(){    
            cout <<"drawing rectangle..." <<endl;    
        }    
};    
class Circle : Shape {    
    public:  
        void draw(){    
            cout <<"drawing circle..." <<endl;    
    }    
};    
int main() {  
    Rectangle rec;  
    Circle cir;  
    
    rec.draw();    
    cir.draw();   
    return 0;  
}  