#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    unordered_map<int,int> hash;
    unordered_map<int,int> ::iterator it;
    
    for(int i=0; i<n; i++){
        cin>>a[i];
        hash[a[i]]++;
    }

    bool flag = false;
    for(int i=0; i<n; i++){
        if(hash[a[i]] == 1){
            flag = true;
            cout<<a[i]<<" ";
            //break;
        }
    }
    if(flag == false)
        cout<<"NO ELEMENTS SINGLE"<<endl;
    return 0;
}