#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int getMin(vector<int> v){
    for(int i=0; i<=v.size(); ++i)
        if(v[i] != i+1)
            return i+1;
}

int findIndex(vector<int> v,int x){
    vector<int>::iterator i;
    for(int i=0; i<v.size(); ++i)
        if(v[i] == x)
            return i;
}

void printItem (vector<int> v){
    for(int i=0; i<v.size(); ++i)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    int n,m;
    cout<<"\nEnter the number of chocolates : ";
    cin>>n;
    cout<<"\nEnter the sweetness of chocolates : ";
    vector<int> chocolates(n);
    for(int i=0; i<n; ++i)
        cin>>chocolates[i];
    sort(chocolates.begin(),chocolates.end());
    cout<<"\nEnter the number of operations(less than 'n') : ";
    cin>>m;

    vector<int> buyList;
    while(m--){
        cout<<"\nEnter the instructions (BUY or EAT-x) :";
        string instruct;
        cin>>instruct;
        if(instruct == "BUY"){
            int missingItem = getMin(chocolates);
            chocolates.push_back(missingItem);
            buyList.push_back(missingItem);
            sort(chocolates.begin(),chocolates.end());
            printItem(buyList);
        }else{
            int x = instruct[instruct.length()-1] - 48;
            cout<<x;
            //vector<int>::iterator index;
            int index = findIndex(chocolates,x);
            chocolates.erase(chocolates.begin()+index);
            cout<<endl;
            printItem(chocolates);
        }
    }
    cout<<"\nBought item will be : ";
    printItem(buyList);
    cout<<"\nAvailable Chocolates are : ";
    printItem(chocolates);
}