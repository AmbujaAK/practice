#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>> t;
    for(int i=1; i<=t; i++) {
        string str;
        getline(cin,str);
        //cin>>str;

        cout<<"String : "<<str<<endl;
        cout<<"\nLength : "<<str.length()<<endl;
        cout<<"\nSize : "<<str.size()<<endl;
    }
    return 0;
}