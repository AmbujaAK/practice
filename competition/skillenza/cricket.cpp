#include <iostream>
#include<vector>
using namespace std;

void display(vector<float> v){
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;
}

vector<float> cal(vector<float> v){
	int flag = 0;
	if(v.size()==3){
		//cout<<"size = 3"<<endl;
		if(v[1] < v[0] && v[1] < v[2])
			v.erase(v.begin() + 1);
		return v;
	}
	for(int i=0; i<v.size()-1; i++){
		if(v[i] > v[i+1]){
			if(v[i+1] < v[i+2]){
				//cout<<"V : "<<v[i+1]<<endl;
				v.erase(v.begin() + i+1);
			}else if (v[i+1] > v[i+2] )
				flag = 1;
		}
		
	}
	
	return v;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<float> v,vv;
		for(int i=0; i<n; i++){
			float num;
			cin>>num;
			v.push_back(num);
		}
		for(int i=0; i<v.size()+1; i++){
			v = cal(v);
		}
		cout<<v.size()<<endl;
		//display(v);
	}
	return 0;
}