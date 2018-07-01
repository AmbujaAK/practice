#include<iostream>
#include<map>
#include<vector>
#include<iterator>
using namespace std;

int main() {
	int n;
  cin>>n;

  vector<string> str(n);

  for(int i = 0; i<str.size();i++)
      cin>>str[i];

  map<string,int> m;
  map<string, int> ::iterator it;
  it = m.begin();
  for(int i = 0; i < str.size();i++,++it){
      m[str[i]]++;
      cout<<"Values : "<<m[str[i]]<<endl;
      cout<<it->second<<" "<<it->first<<endl;
      /*
      if(m[str[i]] > 1){
        cout<< it->first <<endl;
        break;
      }
      */

  }
	return 0;
}
