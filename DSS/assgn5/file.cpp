
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
  	cout<<"\nEnter number of Processes:";
  	cin>>n;

  	queue<int>q;

  	int i=0;
  	int vis[n+1];
  	for(int i=0;i<n+1;i++)
  		vis[i]=0;

  	while(i<n){
  		int p = rand() % n + 1;
  		if(!vis[p]){
  			cout<<p<<" broadcasts for token to enter critical section\n";
  			q.push(p);
  			vis[p]=1;
  		}
  		i++;
  	}


  	while(!q.empty()){
    		int id=q.front();
    		q.pop();

    		vis[id]=0;

    		cout<<endl<<id<<" Received token and entered Critical Section:"<<endl;
    		sleep(6);
    		cout<<id<<" sent token to "<<q.front()<<endl;

    		cout<<endl<<endl;
    		int p2=rand()% 3+1;
    		while(p2--){
       			int p=rand()%5 +1;
       			if(!vis[p]){

        			cout<<p<<" Broadcasts for token to enter critical section\n";
        			q.push(p);
        			vis[p]=1;
       			}
    		}
  	}
}
