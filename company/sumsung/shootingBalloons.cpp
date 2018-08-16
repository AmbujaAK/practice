// Finding Max Score 
#include<iostream>
using namespace std;

int getMaxScore(int a[], int l, int r,int N){
    int max_score = 0;

    for(int i=l+1; i<=r-1; i++){
        int curr_score = 0;
        curr_score = getMaxScore(a, l, i, N) + getMaxScore(a, i, r,N);
        if(l == 0 && r == N){
            curr_score += a[i];
        }
        else{
            curr_score += a[l]*a[r];
        }

        //Update max_score value
        if(curr_score> max_score){
            max_score = curr_score;
        }
    }
    return max_score;
}

int main(){
    int t;
    cin>>t;
    for(int z=1; z<=t; z++){
        int n;
        cin>>n;
        int a[n+2];
        a[0] = 1;
        a[n+1] = 1;
        for(int i=1; i<n+1; ++i)
            cin>>a[i];

        int ans = getMaxScore(a,0,n+1,n+1);
        cout<<"#"<<z<<" "<<ans<<endl;
    }
}