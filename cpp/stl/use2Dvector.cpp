#include <iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>> v){
	for(int i=0; i<v.size();i++){
		for(int j=0; j<v[i].size(); j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}
}

int main() {
    int row,col;
    cin>>row>>col;
    vector<vector<int>> v;
	for(int i=0; i<row;i++){
        vector<int> temp;
        for(int j=0; j<col; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    cout<<"\nBefore swap :"<<endl;
	print(v);
    cout<<"\nAfter swap : "<<endl;
    v[0].swap(v[row-1]);
    print(v);
	return 0;
}