#include <iostream>
#include <cstring>
using namespace std;
/*
void solve(string s) {
    int l = s.length();
    
    int low,high,max=1,start=0;
    for(int i=1;i<l;i++) {
        low=i-1;
        high=i;
        while(low>=0 && high<l && s[low]==s[high]) {
            if(high-low+1>max) {  
                start=low;
                max=high-low+1;
            }
            low--;
            high++;
        }
        
        low=i-1;  
        high =i+1;
        while(low>=0 && high<l && s[low]==s[high]) {
            if(high-low+1>max) {  
                start=low;
                max=high-low+1;
            }
            low--;
            high++;
        }
    }
    if(max==1)
        cout<<s[0];
    else
        cout<<s.substr(start,max);
}
*/

// print palindromic sub-string
void printSubstring(string str, int low, int high) {
    for (int i = low; i<=high; i++)
        cout<<str[i];
    cout<<endl;
}

int solve(string str) {
    int n = str.length();

    // boolean table to store already obtained substring
    bool table[n][n];
    memset(table, 0, sizeof(table)); // initialize table with 0

    // check for substring of max-length 1
    int maxLen = 1;
    for (int i=0; i<n; i++)
        table[i][i] = true;

    // check for substring of max-length 2
    int start = 0;
    for (int i=0; i<n-1; i++) {
        if (str[i] == str[i+1]) {
            table[i][i+1] = true;
            start = i;
            maxLen = 2;
        }
    }

    // check for substring of max-length greater than 2
    for (int k=3; k<=n; k++) {
        for (int i=0; i<n-k+1; i++) {
            int j = i + k - 1;
            
            if (table[i+1][j-1] && str[i] == str[j]) {
                table[i][j] = true;
                if(k > maxLen) {
                    start = i;
                    maxLen = k;
                }
            }
        }
    }

    // printing the sub-string
    cout<<"\nLongest palindrom substring is : ";
    printSubstring(str, start, start+maxLen-1);

    return maxLen;
}

int main() {
    string str;
    cin>>str;

    int length = solve(str);
    cout<<length<<endl;
}