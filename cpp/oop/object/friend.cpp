// to access Protected and Private data of a class.
#include <iostream>  
using namespace std;  

class Box {  
    private:  
        int length;
        int width;
    public:
        // constructor
        Box(){
            length = 0;
            width = 0;
        }
        //friend function
        friend int printLength(Box);
        
        // without friend function
        int printWidth(Box);
};

int printLength(Box b){  
    b.length += 10;  
    return b.length;  
}

int Box::printWidth(Box b){
    b.width += 20;
    return b.width;
}
int main(){
    Box b;  
    cout<<"Length of box: "<< printLength(b)<<endl;
    cout<<"Width of box: "<< b.printWidth(b)<<endl;  
    return 0;  
}