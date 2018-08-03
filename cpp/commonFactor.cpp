#include<iostream>
#include<vector>
using namespace std;

// calculate factors of a number
vector<int> getFactor(int n){
    vector<int> v;
    for(int i=1; i<=n; ++i)
        if(n%i==0)
            v.push_back(i);
    return v;
}

// print the calculated factor of a number
void printV(vector<int> v){
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int main(){
    int n1,n2;
    cin>>n1>>n2;

    vector<int> v1,v2;
    v1 = getFactor(n1);
    v2 = getFactor(n2);

    printV(v1);
    printV(v2);
    int c = 0;
    for(int i=0; i<v1.size(); ++i)
        for(int j=0; j<v2.size(); ++j)
            if(v1[i]==v2[j])
                c++;

    cout<<c<<endl; 
}