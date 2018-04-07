#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cout<<"\nEnter The Number Of Processes : "<<endl;
        cin>>n;

        vector<int> v;
        int i;
        for(i=0;i<n;i++)
                v.push_back(i+1);

        random_shuffle(v.begin(),v.end());

        cout<<"\nThe Processor Ids are : "<<endl;
        for(i=0;i<n;i++)
                cout<<v[i]<<"  ";
	
        int x,ind;
        cout<<"\nEnter the Id to check : "<<endl;
        cin>>x;

        for(i=0;i<n;i++)
        {
                if(x==v[i])
                        ind=i;
        }
        
	int prev,post;
        prev=(ind-1);
        
	if(prev<0)
		prev=prev+n;
        
	post=ind+1;
        
	if(post>=n)
		post=post-n;
        	
	int flag=0;
        while(flag<(n/2))
        {
                if(v[post]>v[ind] || v[prev]>v[ind])
                {
                        cout<<v[ind]<<"\n\n ---->Lost while the hop contain "<<v[prev]<<" and "<<v[post]<<endl;
			break;
                }
                cout<<v[ind]<< "\n\n ---->Won To " << v[prev]<<" and " <<v[post]<<"  There may be a chances of "<<v[ind]<<" to be a leader. "<<endl;
                prev--;
                if(prev<0)
			prev=prev+n;
                post++;
                
		if(post>n)
			post=post-n;
                flag++;
        }
        
	if(post==prev || flag==(n/2))cout<<"\nLeader is : "<<v[ind]<<endl;
        
	return 0;
}
