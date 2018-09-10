#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==1 || n== 2)
        return true;
    for(int i=2; i<n; i++)
        if(n%i==0)
            return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int people;
        int papers;
        cin>>papers>>people;

        int no_of_paper = papers/people;
        int max = 0,min = 0;

        vector<string> v;
        for(int i=0; i<papers; i++){
            string str;
            cin>>str;
            v.push_back(str);
        }
        int x = 0;
        for(int i=0; i<people; i++){
            string ins = "";
            for(int j=0; j<no_of_paper; j++){
                ins += v[x];
                x++;
            }
            int step=0;
            for(int k=0; k<ins.length(); k++){
                if(ins[k] == 'f')
                    step++;
                else if(ins[k] == 'b')
                    step--;
            }
            // for winner
            int winner;
            int f = 0;

            if(step >= 0 && isPrime(step)){
                f = 1;
                winner = i+1;
                cout<<winner<<" "<<step<<endl;
            }

            //for getting max dist. and min dist.
            if(step >= 0){
                if(step > max )
                    max = step;
            }else if(step < 0){
                if(abs(step) > abs(min))
                    min = step;
            }
        }
        cout<<max<<endl;
        cout<<abs(min)<<"b"<<endl;
    }
}