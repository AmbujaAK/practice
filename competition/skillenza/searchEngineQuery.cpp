#include <iostream>
#include <vector>
using namespace std;

vector<string> getLexicographicalOrder(vector<string> v){
    for(int i=0; i<v.size()-1; ++i){
        for(int j=i+1; j<v.size(); ++j){
            if(v[i] > v[j]){
                string temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    return v;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> v(n);
        for(int i=0; i<n; i++){
            //cin>>v[i];
            getline(cin,v[i]);
        }
        
        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}