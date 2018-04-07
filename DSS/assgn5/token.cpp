//Mutual Exclusion using Token Based Approach (Suzuki-Kasami Algorithm) 
#include<bits/stdc++.h>
#include<ctime>

using namespace std;

int main(){
	queue<int>q;
	int n;
	int current;
	printf("\n\n\n\t----------Mutual Exclusion using Token Based Approach--------------\n");
	time_t exe=3,exittime;
	printf("Enter the number of Processes\n");
	cin>>n;

	int process[n]; 
	int p,curr=-1;
	
	time_t now=time(NULL);
	cout << "Enter 0 for exit else enter process id\n" << endl;
	while(1){
		if(curr!=-1)
			cout << "\nProcess " << curr << " Holding TOKEN\n";
		cin>>p;
		if(p==0){
			break;
		}
		if(q.empty()){
			q.push(p);
			now=time(NULL);
			curr=p;
			exittime=now+exe;
			cout << "\nProcess " << curr << " Gets TOKEN and Enters critical section\n";
				
		}
		// waiting in queue
		else{
			q.push(p);
			
		}
		// release time
		if(time(NULL)>=exittime){
			cout << "\nProcess " << curr << "  Released TOKEN and left the critical section\n";
			q.pop();
			if(!q.empty()) curr = q.front();
		}
		
	}
	int see=0;
	while(!q.empty()){
		if(time(NULL)>=exittime){
			curr= q.front();
			q.pop();
			cout << "\nProcess " << curr << " Released TOKEN and left the critical section\n";
			exittime=time(NULL)+exe;
			curr=q.front();
		
		if(curr!=0)
			cout << "\nProcess " << curr << " Gets TOKEN and Enter critical section\n";
		}
		
		
	
	}

	cout << "\nExecution Completed\n";
	return 0;
}
