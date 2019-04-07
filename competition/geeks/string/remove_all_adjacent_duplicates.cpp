#include <iostream>
#include <cstring>
using namespace std;

string solve(string str) {
    int n = str.length();
    string temp;
    
    if(str[0] != str[1])
        temp += str[0];
    
    int i=1;
    while(i < n) {
        if(str[i] != str[i-1] && str[i] != str[i+1])
            temp += str[i];
        i++;
    }
    
    if(temp.length() == 0)
        return temp;
        
    if(temp.length() != str.length())
        return solve(temp);

    return temp;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--) {
	    string str;
	    cin>>str;
	    
	    string res;
	    res = solve(str);
	
	    cout<<res<<endl;
	}
	return 0;
}