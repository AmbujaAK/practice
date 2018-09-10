#include<iostream>
#include<vector>
using namespace std;

int GCD(int a,int b){
    if (b==0)
        return a;
    else
        return GCD(b,a%b);
}

int main(){
    int N,K;
    cin>>N>>K;

    vector<int> v(N);
    for(int i=0; i<N; i++)
        cin>>v[i];
    int sum =0;
    int gcd = 0;
    int ans = 0;
    for(int i=0; i <= N-K; i++){
        sum = v[i] + v[i+1];
        //cout<<" s :"<<sum<<endl;
        gcd = GCD(v[i],v[i+1]);
        for(int j=i+2; j<K+i; j++){
            sum += v[j];
            gcd = GCD(gcd,v[j]);
            //cout<<"sum : "<<sum<<"\ngcd : "<<gcd<<endl;
        }
        //cout<<"sum : "<<sum<<"\ngcd : "<<gcd<<endl;
        ans += sum * gcd;
    }
    cout<<ans<<endl;
}