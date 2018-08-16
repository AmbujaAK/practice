#include <iostream>
using namespace std;
int a[13][5], b[5][5];

void detonate(int row){
    for (int i = row; i > row - 5; i--) {
        for (int j = 0; j < 5; j++) {
            b[row-i][j] = 0;
            if (i >= 0 && a[i][j] == 2){
                b[row-i][j] = 2;
                a[i][j] = 0;
            }
        }
    }
}

void unDetonate(int row){
    for (int i = row; i > row - 5; i--) {
        for (int j = 0; j < 5; j++) {
            if (i >= 0 && a[row-i][j] == 2){
                a[i][j] = 2;
            }
        }
    }
}

void getMaxCoins(int pos, int coins, int n, int &maxCoins){
    if (pos < 0 || pos > 4 || coins < 0)
        return;
    if (a[n-1][pos] == 2)
        coins -= 1;
    else if (a[n-1][pos] == 1)
        coins += 1;

    if (n == 1){
        if (coins > maxCoins)
            maxCoins = coins;
        return;
    } else {
        getMaxCoins(pos + 1, coins, n-1, maxCoins);
        getMaxCoins(pos - 1, coins, n-1, maxCoins);
        getMaxCoins(pos, coins, n-1, maxCoins);
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++) {
        int n;
        cin>>n;
        int maxCoins = -1;
        for (int j = 0; j<n; ++j)
            for (int k=0; k<5; ++k)
                cin>>a[j][k];
        
        for (int j=0; j<5; ++j)
            a[n][j] = 0;
        
        a[n][2] = 3;

        for (int j = n-1; j > 0; j--){
            int coins = -1;
            detonate(j);

            getMaxCoins(2,0,n,coins);

            if (coins > maxCoins)
                maxCoins = coins;
            unDetonate(j);
        }
        cout<<"case #"<<i<<" "<< ((maxCoins < 0) ? -1 : maxCoins)<<endl;
    }
}