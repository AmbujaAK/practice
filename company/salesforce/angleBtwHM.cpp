#include <iostream>
using namespace std;

int solve(double H,double M){
    if (H < 0 || M < 0 || H > 12 || M > 60)
        cout<<"Wrong Input !"<<endl;
    
    if (H == 12)
        H = 0;
    if (M == 60)
        M = 0;
    
    int hAngle = 0.5 * (H * 60 + M);
    int mAngle = 6 * M;

    int angle = abs(hAngle - mAngle);
    angle = min(360-angle , angle);
    return angle;
}

int main(){
    int H,M;
    cout<<"\nEnter HOUR and MINUTE :";
    cin>>H>>M;

    int ans = solve(H,M);
    cout<<ans<<endl;
}