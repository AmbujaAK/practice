// NOT DONE
/*
Input:
1
6 
900  940 950  1100 1500 1800
910 1200 1120 1130 1900 2000

Output:
3
*/
#include<iostream>
#include<map>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

struct time{
    int start,end;
}

bool compare(time t1, time t2){
    return (t1.start < t2.start);
}

void print_vector(vector<pair<int,int>> v){
    vector<pair<int,int>>::iterator it;
    cout<<"\nPrinting using map iterator :"<<endl;
    for(it=v.begin(); it != v.end(); it++){
        cout<<it->first<<" ";
    }
    sort(v.begin(),v.end(), comparetorTime);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arrival[n],depart[n];
        for(int i=0; i<n; i++)
            cin>>arrival[i];
        
        for(int i=0; i<n; i++)
            cin>>depart[i];

        vector<pair<int,int>> v;
        pair<int,int> p;
        for(int i=0; i<n; i++){
            p.first = arrival[i];
            p.second = 1;
            v.push_back(p);
        }
        for(int i=0; i<n; i++){
            p.first = depart[i];
            p.second = 0;
            v.push_back(p);
        }
        cout<<"\nVector : "<<endl;
        print_vector(v);
        
        int platforms = 0;
        int maxm = 0;
        
        std::vector<pair<int,int>>::iterator it;
        for(it = v.begin(); it != v.end(); it++){
            if(it->second == 1)
                platforms++;
            else
                platforms--;
            if(platforms > maxm)
                maxm = platforms;
        }
        cout<<"size  :"<<v.size()<<endl;
        cout<<maxm<<endl;
    }
}