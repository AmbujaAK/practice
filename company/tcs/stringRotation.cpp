/*
INPUT :
carrace
3
L 2
R 2
L 3

OUTPUT :
NO
*/

#include<bits/stdc++.h>
#include<string>

using namespace std;

void lRotation(string &str, int i){
    reverse(str.begin(), str.begin()+i);
    reverse(str.begin()+i, str.end());
    reverse(str.begin(), str.end());
}

void rRotation(string &str, int i){
   lRotation(str, str.length()-i);
}

bool cAnagram(string str1, string str){
	int a1 = str.length(),a2 = str1.length();
	if(a2>a1)
		return false;
	int flag1 =0,flag2=0;
	sort(str1.begin(),str1.end());
	
	for(int i=0;i<a1-a2+1;i++){
		string s = str;
		sort(s.begin()+i, s.begin()+i+a2);
		flag1++;
		
		for(int j=0;j<a2;j++){
			if(s[i+j]!=str1[j]){
			flag2++;
			break;
			}
		}
		if(flag1!=flag2)
			return true;
	}
	return false;
}

int main(){
	string s,str;
	cin>>s;
	str = s;
	int q;
	cin>>q;
	string str1;
	
	while(q--){
		char c; int m;
		cin>>c>>m;
		m %= s.length();
		if(c == 'L')
			lRotation(s,m);
		if(c == 'R')
			rRotation(s,m);
		str1.push_back(s[0]);
	}
	
	if(cAnagram(str1,str)){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}