#include <iostream>
#include <limits.h>
using namespace std;

int a[5][2];

void getMinTime(int target_km, int max_energy, int phase, int time, int &mintime){
    if (max_energy < 0 || mintime < time)
        return;
    
    if (target_km == 0){
        if(mintime > time)
            mintime = time;
        return;
    }
    if(phase >= 5)
        return;
    getMinTime(target_km-1,max_energy-a[phase][1],phase,time+a[phase][0],mintime);
    getMinTime(target_km, max_energy, phase+1, time, mintime);
}

int main(){
    int target_km,max_energy;
    cin>>target_km>>max_energy;

    for(int i=0; i<5; i++)
        for(int j=0; j<2; j++)
            cin>>a[i][j];
    
    int time = INT_MAX;
    getMinTime(target_km, max_energy, 0, 0, time);

    if(time == INT_MAX)
        time = -1;
    cout<<time<<endl;

}