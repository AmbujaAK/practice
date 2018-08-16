#include<bits/stdc++.h>
using namespace std;
vector<int> adj[2005];
vector<int> dis(2005);
#define fi first
#define se second
int n;
pair<int,int> bfs(int p)
{
    queue<int> q;
    q.push(p);
    dis[p]=0;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int j:adj[x])
        {
            if(dis[j]==-1)
            {
                dis[j]=dis[x]+1;
                q.push(j);
            }
        }
    }
    int in=1,md=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        if(md<dis[i])
        {
            md=dis[i];
            in=i;
        }
    }
    return {in,md};
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    fill(dis.begin(),dis.end(),-1);
    auto x=bfs(1);
    //cout<<x.fi<<endl;
    fill(dis.begin(),dis.end(),-1);
    auto p=bfs(x.fi);
    //cout<<p.fi<<endl;
    cout<<(p.se+1)/2<<endl;
}
