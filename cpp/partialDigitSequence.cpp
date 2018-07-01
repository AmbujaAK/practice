#include<iostream>
#include<string>
#include<map>

using namespace std;

bool check(int num1, int num2){
    map<char,int> m;
    m.insert('0',0);
    m.insert('1',0);
    m.insert('2',0);
    m.insert('3',0);
    m.insert('4',0);
    m.insert('5',0);
    m.insert('6',0);
    m.insert('7',0);
    m.insert('8',0);
    m.insert('9',0);

    string s1 = to_string(num1);
    string s2 = to_string(num2);

    for(int i=0; i<s1.size();i++){
        for(int j=0; j<s2.size(); j++){
            if(s1[i]==s2[j]){

                //return true;
              }
        }
    }
}

int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
        cin>>arr[i];

    map<char,int> m;
    m.insert('0',0);
    m.insert('1',0);
    m.insert('2',0);
    m.insert('3',0);
    m.insert('4',0);
    m.insert('5',0);
    m.insert('6',0);
    m.insert('7',0);
    m.insert('8',0);
    m.insert('9',0);

    int count,max=0;
    for(int i=0; i<num-1; i++){

    }
    cout<<count;
    return 0;
}
