#include <vector>
#include <queue>
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int flag[109][109]={};
        int nn,mm,temp1,temp2;
        cin >> nn >> mm;
        vector<int> x,y,c;
        for(int i=0; i<nn; i++)
        {
            cin >> temp1 >> temp2;
            flag[temp1][temp2]=1;
            x.push_back(temp1);
			      y.push_back(temp2);
			      c.push_back(1);
        }
        for(int i=0; i<mm; i++)
        {
            cin >> temp1 >> temp2;
            flag[temp1][temp2]=1;
            x.push_back(temp1);
			y.push_back(temp2);
			c.push_back(0);
        }
        int n=(int)x.size();
        int d[n][n];
        for (int i=0; i<n; i++)
            for (int j=0; j<n; j++)
                d[i][j]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
        for (int i=0; i<n; i++)
			if (c[i]==0)
            for (int j=0; j<n; j++)
                for (int k=0; k<n; k++)
                    d[j][k]=min(d[j][k], max(d[j][i], d[i][k]));
        int sol=0;
        for (int i=0; i<n; i++)
            for (int j=0; j<n; j++)
                if (c[i]==0 && c[j]==1)
                    sol=max(sol, d[i][j]);
        int ans  = ceil(sqrt(sol));
        cout<< ans <<endl;
    }
}
