// Create a spanning tree from a given root using Distributed Message Passing Algorithm 
#include <bits/stdc++.h>

using namespace std;

void updateParentAr(int root,vector<vector<int> > &myGraph,vector<int> &parentAr,int n,vector<int> &sequenceAr)
{
	vector<int> visited(n+1,0);
	queue<int> bfs;
	bfs.push(root);
	visited[root] = 1;
	parentAr[root] = 0;
	while(!bfs.empty())
	{
		int currNode = bfs.front();
		bfs.pop();
		
		
		//visited[currNode] = 1;
		sequenceAr.push_back(currNode);
		for(int i=0;i<myGraph[currNode].size();i++)
		{
			int myNeigh = myGraph[currNode][i];
			if(myNeigh == parentAr[currNode])
          			continue;
			cout<<currNode<<" passes messsage to "<<myNeigh<<" with its current timestamp "<<endl;
			
			if(visited[myNeigh])
			{
				cout<<myNeigh<<" discards this message of "<<currNode<<" as this message is obselete"<<endl;
				continue;
			}
			cout<<myNeigh<<" receives the message as it is fresh for this node. It replies to "<<currNode<<" makes "<<currNode<<" as its parent, and updates its timestamp as per this message"<<endl;
				
			parentAr[myNeigh] = currNode;
			bfs.push(myNeigh);
			visited[myNeigh] = 1;
			
		}
	}
}

int main()
{
	int m,n;
	cout<<"Enter the number of nodes in the graph\n";
	cin>>n;
	if(n == 0)
	{
		cout<<"The graph is empty as there is no node\n";
		return 0;
	}
	cout<<"The nodes are be numbered from 1 to "<<n<<endl;
	vector<vector<int> > myGraph(n+1);
	cout<<"Enter the connections as : node1 node2 " <<endl;
	cout<<"Please make sure that the graph is fully connected"<<endl;
	cout<<"Enter 0 when complete"<<endl;
	int var = 1;
	while(var)
	{
		int src,dest;
		cin>>src;
		if(src == 0)
			break;
		cin>>dest;
		if(dest == 0)
			break;
		
		if(src<1 || src>n ||dest<1 ||dest>n)
		{
			cout<<"Wrong input, source or destination out of range"<<endl;
			continue;
		}
		myGraph[src].push_back(dest);
		myGraph[dest].push_back(src);	
	}
	cout<<"Enter the number of queries"<<endl;
	int queries;
	cin>>queries;
	while(queries--)
	{
		int root;
		cout<<"Enter the root "<<endl;
		cin>>root;
		vector<int> parentAr(n+1,-1);
		vector<int> sequenceAr;
		updateParentAr(root,myGraph,parentAr,n,sequenceAr);
		
		cout<<"In the spanning tree created"<<endl;
		cout<<root<<" is the Root Node "<<endl;
		for(int j=1;j<sequenceAr.size();j++)
		{
			cout<<"The parent of "<<sequenceAr[j]<<" is "<<parentAr[sequenceAr[j]]<<endl;	
		}
		
		for(int j=1;j<=n;j++)
		{
			if(parentAr[j]== -1)
				cout<<"Node "<<j<<" is not reachable from the Root Node "<<root<<endl;
		}
		cout<<endl;
	}
	return 0;
}

