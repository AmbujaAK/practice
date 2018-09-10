#include <iostream>
#include <vector>
using namespace std;

void reMakeVector(vector<string> &v, int len){
    for (int i=0; i<v.size(); i++){
        while(v[i].length() < len)
            v[i] += '0';
    }
}

int countOne(vector<int> v){
    int c = 0;
    for(int i=0; i<v.size(); i++){
        //cout<<v[i]<<" ";
        if((int)v[i] == 1)
            c++;
    }
    return c;
}
int getMaxLength(vector<string> v){
    int len = 0;
    int max_len = 0;
    for (int i=0; i<v.size(); i++){
        len = v[i].length();
        max_len = max(max_len,len);
    }
    return max_len;
}
int solve(vector<string> v, int len, int N){
    vector<int> temp;
    for (int i=0; i<len; i++){
        int z = 0;
        for (int j=0; j<N; j++){
            z = z | (int)(v[j][i] - '0');
        }
        temp.push_back(z);
        //cout<<"z :"<<z<<endl;
    }
    int no_of_one = 0;
    no_of_one = countOne(temp);
    
    return no_of_one;
}

int main(){
    int N;
    cin>>N;

    vector<string> v;
    for (int i=0; i<N; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    
    int len = getMaxLength(v);
    reMakeVector(v,len);

    int no_of_one = solve(v,len,N);

    if(no_of_one % 2 == 0){
        cout<<"B"<<endl;
        cout<<no_of_one<<endl;
    }
    else{
        cout<<"A"<<endl;
        cout<<no_of_one<<endl;
    }
}