#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fact(int n){
    if (n == 1 || n == 0)
        return 1;
    return n * fact(n-1);
}

// for duplicate character
int findRankForDup(string s) {
    int n = s.size();
    int t_count = 1;
    for(int i=0; i<n; i++) {
        int less_than = 0;
        for(int j=i+1; j<n; j++) {
            if(int(s[i]) > int(s[j]))
                less_than++;
        }

        // count frequnecy of duplicate character
        vector<int> d_count(52,0);
        for(int j=i; j<n; j++) {
            if(int(s[j]) >= 'A' && int(s[j]) <= 'Z')
                d_count[int(s[j]) - 'A'] += 1;
            else
                d_count[int(s[j]) - 'a' + 26] += 1;
        }

        int d_fact = 1;
        for(int ele : d_count)
            d_fact *= fact(ele);

        t_count +=(fact(n-i-1) * less_than) / d_fact;
    }

    return t_count;
}


// for all different characters
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
    cout<<"Enter the string : "<<endl;
    string str;
    cin>>str;

    int flag ;
    cout<<"\nIs there any duplicate character ? \n0 NO\n1 YES"<<endl;
    cin>>flag;

    int ans ;
    if(flag == 0)
        ans = findRank(str);
    else
        ans = findRankForDup(str);
    cout<<ans<<endl;
}