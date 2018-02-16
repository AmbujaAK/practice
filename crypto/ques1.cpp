#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string decrypt(string msg,int l,int key[])
{
	int len=msg.length();
	int row=len/l;
	int col=l;
	
	if(len%l)
	row++;
	
	char temp[row+1][col+1];
	int k=0;
	for(int i=1;i<=col;i++)
	{
		for(int j=1;j<=row;j++)
		{
			
			 if((msg[k] == '\0' || k>=len)|| !isalpha(msg[k]))
            {
                /* Adding the padding character '_' */
                temp[j][i] = '_';  
            }
             
            if(isalpha(msg[k]))
            { 
                /* Adding only space and alphabet into matrix*/
                temp[j][i] = msg[k];
            }
            k++;			
		}
	}
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{cout<<temp[i][j]<<" ";
		}cout<<endl;
	}
	 string ress="";
   	 map<int,int>hm;
    
	for(int i=1;i<=l;i++)
   	 	hm[i]=key[i];
    
   
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			ress+=toupper(temp[i][hm[j]]);
		}
    	}
    
    return ress;
	
}

string encrypt(string msg,int l,int key[])
{
	int len=msg.length();
	int row=len/l;
	int col=l;
	
	if(len%l)
		row++;
	
	char temp[row+1][col+1];
	int k=0;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			
			 if((msg[k] == '\0' || k>=len) || ! isalpha(msg[k]))
            {
                /* Adding the padding character '_' */
                temp[i][j] = '_';  
            }
             
            else if( isalpha(msg[k]) )
            { 
                /* Adding only space and alphabet into matrix*/
                
                temp[i][j] = msg[k];
            }
            k++;			
		}
	}
	
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			cout<<temp[i][j]<<" ";
		}
		cout<<endl;
	}
    
    string res="";
    map<int,int>hm;
    
	for(int i=1;i<=l;i++)
		hm[key[i]]=i;
    
   
	for(int i=1;i<=col;i++)
	{
		for(int j=1;j<=row;j++)
		{
		 
		   // if(temp[j][hm[i]] !='_')
		    res+=toupper(temp[j][hm[i]]);
           
		}
    }
    
    return res;
}

int main()
{
	
	int l=0;
	cout<<"\nEnter key size:";
	cin>>l;
	
	int k[l+1];
	cout<<"\nEnter key values:";
	for(int i=1;i<=l;i++)
	cin>>k[i];

	string str;
    cout<<"Enter message: ";
    cin>>str;

	
	string result="",result1="";
	cout<<"\nAfter Encryption:\n";
	result=encrypt(str,l,k);
	
	for(int i=0;i<result.length();i++)
		if(result[i]!='_')
			result1+=result[i];
	
	cout<<result1<<endl;
	
	cout<<"\nAfter Double Permutation:\n";
	string result2=encrypt(result1,l,k);
	
	for(int i=0;i<result2.length();i++)
	if(result2[i]!='_')
	cout<<result2[i];
	
	cout<<endl;
	
        /* DECRYPTION PART-1 */

          cout<<"\nAfter Decryption-1:\n";
        string result3=decrypt(result2,l,k);

        for(int i=0;i<result3.length();i++)
        if(result3[i]!='_')
        cout<<result3[i];

        cout<<endl;


	/* DECRYPTION PART-2 */
        cout<<"\nAfter Decryption-2:\n";
        string result4=decrypt(result,l,k);

        for(int i=0;i<result4.length();i++)
        if(result4[i]!='_')
        cout<<result4[i];

        cout<<endl;

	str.erase();
	return 0;
}
