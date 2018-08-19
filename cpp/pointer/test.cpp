#include <iostream>
using namespace std;

void change(int *a, char *x){
    *a += 20;
    
    *x = 'B';
    //cout<<*a;
}

int main(){
    int a = 10;
    char x = 'A';
    change(&a, &x);
    
    cout<<"After :"<<a<<" "<<x<<endl;
}