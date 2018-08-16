#include<iostream>
using namespace std;
int cc[25], t[25], min_cost = 1000000;

void dfs(int N,int p, int a, int b, int c, int cost){
    int asum = a+b+c;
    if( cost > min_cost )
        return;
    if (p == N-1){
        if (asum < t[p])
            cost += cc[p];
        if (cost < min_cost )
            min_cost = cost;
        return;
    }

    dfs(N, p+1, a, b, c, cost+cc[p]);
    dfs(N, p+1, a + t[p], b, c, cost+2*cc[p]);

    if (asum >= t[p]){
        if (t[p] > b+c)
            a = asum - t[p];
        if (t[p] > c)
            b = (t[p] - c >= b) ? 0 : (b - t[p] + c);
        dfs(N, p+1, 0, a, b, cost);
    }
}

int main(){
    int z;
    cin>>z;
    for(int k = 1; k <=z; ++k){
        int N;
        cin>>N;
        for (int i=0; i<N; ++i)
            cin>>t[i]>>cc[i];
        dfs(N,0, 0, 0, 0, 0);
        cout<<"case #"<<k<<" "<<min_cost<<endl;
        min_cost = 1000000;
    }
    return 0;
}