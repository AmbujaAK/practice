#include <iostream>
using namespace std;

float division(int a,int b){
    if (b == 0)
        throw "Division by 0 not allowed !";
    return a/b;
}
int main(){
    int a,b;
    cout<<"\nEnter any two number : ";
    cin>>a>>b;
    float k = 0;
    try {
        k = division(a,b);
        cout<<"\nResult is : "<< k <<endl;
    } catch(const char* e) {
        cerr<<e<<endl;
    }

    return 0;
}