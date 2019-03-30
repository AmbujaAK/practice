#include <iostream>
using namespace std;

int getMaxScore(int balloons[], int left, int right, int size) {
    int max_score = 0;
    for(int i=left+1; i<right; i++) {
        int curr_score = 0;
        curr_score = getMaxScore(balloons,left,i,size) + getMaxScore(balloons,i,right,size);

        if(left == 0 && right == size)
            curr_score += balloons[i];
        else
            curr_score += balloons[left] * balloons[right];
        
        if(curr_score > max_score)
            max_score = curr_score;
    }
    return max_score;
}

int main() {
    int t;
    cin>>t;
    for(int z=1; z<=t; z++) {
        int n;
        cin>>n;

        int balloons[n+2];
        balloons[0] = balloons[n+1] = 1;

        for(int i=1; i<=n; i++)
            cin>>balloons[i];

        int ans;
        ans = getMaxScore(balloons,0,n+1,n+1);
        cout<<"#"<<z<<" "<<ans<<endl;
    } 
}