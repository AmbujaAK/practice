#include<iostream>
#include<math.h>
#include<sys/time.h>
using namespace std;

/*   gcd function  */

long long int gcd(long long int a,long int b)
{
     if(a==0)
		return b;

	return gcd(b%a,a);
}

/*    power function   */

long long int power(long long int a,long long int b,long long int n)
{
	long long int p=1;
	while(b--)
		p=(p*a)%n;
	return p;
}

/*   pollard p-1 factorization function   */

long long int pollard(long long int n,long long int B)
{
  	long long int a=2,e=2;

	while(e<=B)
	{
		a=power(a,e,n)%n;
		e=e+1;
	}
	
	long long int p=gcd(a-1,n);
	if(1<p && p<n)
	 	return p;
 	return 0;
}

/*    trial division  function   */

long long int trial(long long int n)
{
	long long int a=2;
	while(a<= sqrt(n))
	{
	  	while(n%a==0)
	  	{
			cout<<a<<endl;
			n=n/a;
	  	}
		a=a+1;
	}
	if(n>1)
	   	cout<<n<<endl;
}
	

int main()
{
	long long int N,B;
	cout<<"Enter the value of N and B: ";
	cin>>N;
	cin>>B;
	
	cout<<N<<endl;


/*   pollard p-1 factorization  calculation with time    */

	cout<<"\nFor pollard p-1 factorization"<<endl;

        struct timeval stop_p,start_p;
	gettimeofday(&start_p,NULL);	// start time
  
	cout<<"p = "<<pollard(N,B)<<endl;	

	gettimeofday(&stop_p,NULL);	// stop time


/* calculation of time taken by pollard p-1 factorization in microseconds  */

	cout<<"Time taken by Pollard p-1 factorization = "<<(stop_p.tv_sec-start_p.tv_sec)*1000000+(stop_p.tv_usec-start_p.tv_usec)<<" microseconds"<<endl;

	cout<<endl;	


/*  trial division  */
	cout<<"For trial division"<<endl;	

	struct timeval stop_t,start_t;
        gettimeofday(&start_t,NULL);	//start time

        trial(N);
	
	gettimeofday(&stop_t,NULL);	// stop time

/*   calculation of time taken by trial division in microseconds  */

	cout<<"Time taken by Trial division factorization = "<<(stop_t.tv_sec-start_t.tv_sec)*1000000+(stop_t.tv_usec-start_t.tv_usec)<<" microseconds"<<endl;

}