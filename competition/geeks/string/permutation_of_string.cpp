#include <iostream>
#include <set>
using namespace std;
set<string> st;

void swap(string &s, int i, int j) {
    char t = s[i];
    s[i] = s[j];
    s[j] = t;
}

void permutation(string s, int low, int high) {
    if(low == high)
        st.insert(s);
    for (int i=low; i<=high; i++) {
        swap(s,low,i);
        permutation(s,low+1,high);
        swap(s,low,i);
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        st.clear();
        string str;
        cin>>str;
        
        permutation(str,0,str.length()-1);
        
        set<string>::iterator it;
        for(it=st.begin(); it != st.end(); it++) {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}