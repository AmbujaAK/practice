#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void display(vector<int> v,vector<int>::iterator i){
  cout<<"\nCurrent vector is :";
  for(i=v.begin();i!=v.end();++i)
    cout <<"\n"<<*i<<" is added.";
}

int main() {
	int t;
  cout<<"\nEnter test case : ";
	cin>>t;
	while(t--){
	    int N,n;
      cout<<"\nEnter number of Arrays : ";
	    cin>>N;

	    vector<int> v1;
	    vector<int>::iterator i1;
	    for(int i=0; i<N; i++){
          cout<<"\nEnter size of array : ";
          cin>>n;
          int val;
	        for(int i=0; i<n; i++){
	            cin>>val;
	            v1.push_back(val);
	        }
          i1 = v1.begin();
          display(v1,i1);
	    }

	    sort(v1.begin(),v1.end());
      // remove duplicates
      for(i1=v1.begin(); i1!=v1.end(); i1++){
        if(*i1 == *(i1+1)){
          v1.erase(i1);
          //v.erase(i);
          i1--;
     }
}
	    for(i1=v1.begin(); i1!=v1.end();i1++)
	        cout<<*i1<<" ";
	    cout<<endl;
	}

	return 0;
}
