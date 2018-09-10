#include <iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<char> s){
	vector<char>:: iterator i;
	for(i=s.begin(); i!=s.end(); i++)
		cout<<*i;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		char dir;
		cin>>n>>dir;
		
		string s;
		cin>>s;
		
		while(s.length() <= pow(n,2))
			s += s;
	
		int len = n;
		
		vector<char> v;
		if(dir=='u'){
			for(int row=1; row<=n; row++){
				for(int j=0; j<len; j++)
				cout<<" ";
				len--;
				int index = pow(row-1,2);
				for(int k = 0; k < 2*row-1; k++){
					//cout<<s[index];
					v.push_back(s[index]);
					index++;
				}
				if(row%2==0){
					reverse(v.begin(),v.end());
					print(v);
				}else
					print(v);
				v.clear();
				cout<<endl;
			}
		}
		else{
			for(int row=n; row>=1; row--){
				for(int j=0; j<len; j++)
					cout<<" ";
				len++;
				int index = pow(row-1,2);
				for(int k = 0; k < 2*row-1; k++){
					//cout<<s[index];
					v.push_back(s[index]);
					index++;
				}
				if(row%2==0){
					reverse(v.begin(),v.end());
					print(v);
				}else
					print(v);
				v.clear();
				cout<<endl;
			}
		}
	}
	return 0;
}