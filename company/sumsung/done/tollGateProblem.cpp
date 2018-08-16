#include <iostream>
#include <ctime>
using namespace std;

int N, tc[22], th[22], min_cost = 100000;
void dfs(int tp, int bp3, int bp2, int bp1, int cc) {
    int tot_bp = bp1 + bp2 + bp3;
    if (cc > min_cost)
        return;
    if (tp == N-1){
        if (tot_bp < th[tp])
            cc += tc[tp];
        if (cc < min_cost)
            min_cost = cc;
        return;
    }
    dfs(tp+1, bp3, bp2, bp1, cc+tc[tp]);
    dfs(tp+1, bp3+th[tp], bp2, bp1, cc+2*tc[tp]);

    if (tot_bp >= th[tp]){
        if (th[tp] > bp2 + bp1){
            bp3 = tot_bp - th[tp];
            bp1 = bp2 = 0;
        }
        else if (th[tp] > bp1 ){
            bp2 = (bp1 + bp2) - th[tp];
            bp1 = 0;
        }
        dfs(tp+1, 0, bp3, bp2, cc);
    }
    
}

int main(){
    int z;
    cin>>z;
    clock_t start, end;
    double cup_time_used;
    start = clock();

    for(int k = 1; k <=z; ++k){
        cin >> N;
        for (int i=0; i<N; i++)
            cin>>th[i]>>tc[i];
        
        dfs(0,0,0,0,0);

        cout<<"case #"<<k<<" "<<min_cost<<endl;
        min_cost = 1000000;
    }

    end = clock();
    cup_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    cout<<"\ntime taken : "<<cup_time_used;

    return 0;
}