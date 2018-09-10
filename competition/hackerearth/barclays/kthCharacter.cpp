#include <iostream>
using namespace std;

int main(){
    string str,nstr;
    cin>>str;

    char x;
    for (int i=0; i<str.length(); i++){
        if (str[i] > str[i+1]){
            x = str[i];
            break;
        }
    }
    for (int i=0; i<str.length(); i++){
        if (str[i] != x)
            nstr += str[i];
    }
    cout<<nstr<<endl;
}