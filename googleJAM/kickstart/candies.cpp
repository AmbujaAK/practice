#include <iostream>  // includes cin to read from stdin and cout to write to stdout
#define MAX -1000000000000001
using namespace std;  // since cin and cout are both in namespace std, this saves some text

int main() {
    int t;
    cin>>t;
    
    for(int z = 1; z<=t; ++z){
        unsigned long int N,O;
        signed long int D;
        cin>>N>>O>>D;
        signed int X1,X2,A,B,C,M,L;
        cin>>X1>>X2>>A>>B>>C>>M>>L;

        long long int x[N+1];
        x[1] = X1;
        x[2] = X2;
        for(int i=3; i<=N; i++)
            x[i] = (A*x[i-1] + B*x[i-2] + C) % M;
        //cout<<"c1 :"<<x[2]<<endl;
        long long int s[N+1];
        for(int i=1;i<=N; i++)
            s[i] = x[i]+L;
        /*
        for(int i=1; i<=N; i++)
            cout<<s[i]<<" ";
        cout<<endl;
        */
        long long int sum ;
        int countOdd =0;
        long long int max = MAX;
        int f = 0;
        for(int i=1; i<=N; i++){
            countOdd = 0;
            sum = 0;
            for(int j=i; j<=N; j++){
                if(s[j]%2!=0){
                    countOdd++;
                }
                if(countOdd > O){
                    f = 1;
                    break;
                }
                sum += s[j];
                if(sum > D){
                    f = 2;
                    break;
                }
                if( sum > max){
                    max = sum;
                }
                //cout<<"sum : "<<sum<<endl;
                //cout<<"max : "<<max<<endl;
                if(max > D){
                    f = 2;
                    break;
                }
            }
            continue;
        }
        if(f==2)
            cout<<"Case #"<< z <<": "<<"IMPOSSIBLE"<<endl;
        else
            cout<<"Case #"<< z <<": "<<max<<endl;
    }
    return 0;
}
 