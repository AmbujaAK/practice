#include <iostream>
#include <string>
using namespace std;

int fact(int n){
    if (n == 1 || n == 0)
        return 1;
    return n * fact(n-1);
}

int findSmallerInRight(string s, int low, int high){
    int count = 0;
    for(int i=low+1; i<=high; i++)
        if (s[i] < s[low])
            count++;
    return count;
}

int findRank(string s){
    int len = s.size();
    int mul = fact(len);
    int rank = 1;
    int cRight;

    for (int i = 0; i < len; ++i) {
        mul /= len - i;
        cRight = findSmallerInRight(s, i, len-1);
 
        rank += cRight * mul ;
    }

    return rank;
}

int main(){
    string str;
    cin>>str;

    int ans = findRank(str);
    cout<<ans<<endl;
}