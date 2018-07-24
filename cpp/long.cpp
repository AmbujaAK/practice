#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		int max=0,ans;
		for(int i=0; i<n-1; i++){
			int x = a[i];
			int h=0;
			for(int j=i+1; j<n;j++){
				if(a[j]>=x){
					h++;
					break;
				}
				h++;
			}
			
			//cout<<"Height :"<<h<<endl;
			if(h >= max ){
				max = h;
				ans = i+1;
			}
		}
		if(n==1)
			ans = 1;
		cout<<ans<<endl;
	}
}
