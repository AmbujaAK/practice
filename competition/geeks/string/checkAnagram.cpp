#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
        string str1,str2;
        cin>>str1;
        cin>>str2;
        
        if(str1.size() != str2.size()){
            cout<<"NO"<<endl;
            continue;
        }
        
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        for(int i=0; i<str1.size(); i++){
            map1[str1[i]]++;
            map2[str2[i]]++;
        }
        
        bool flag = true;
        for(int i=0; i<str1.size(); i++){
            if(map1[str1[i]] != map2[str2[i]]){
                cout<<"NO"<<endl;
                flag = false;
                break;
            }
        }
        if(flag == true)
            cout<<"YES"<<endl;
    }
    return 0;
}