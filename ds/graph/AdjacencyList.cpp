#include<iostream>
#include<vector>
#include<list>
using namespace std;

void printG(vector<list<int>> v){
    vector<list<int>>::iterator i;
    for(i = v.begin(); i != v.end(); ++i){
        list<int> l = *i;
        list<int>::iterator j;
        //cout<<"head["<< *j <<"]";
        for(j = l.begin(); j != l.end(); ++j){
            cout<<"->"<<*j;
        }
        cout<<endl;
    }
}
int main(){
    int nodes,edges;
    cout<<"\nEnter the number of nodes :";
    cin>>nodes;
    cout<<"\nEnter the number of edges :";
    cin>>edges;

    vector<list<int>> v(nodes+1);

    int from,to;
    for(int i=1; i<=edges; i++){
        cin>>from>>to;
        v[from].push_back(to);
        v[to].push_back(from);
    }
    printG(v);
}