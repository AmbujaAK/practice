#include<iostream>
using namespace std;

int count=1 ;
void TOH(int d,int t1,int t2,int t3){
	if (d==1){
		cout<<"\nShift top disk from tower "<<t1<<" to tower "<<t2<<"................count = "<<count++;
		return;
	}
	TOH(d-1,t1,t3,t2);
	cout<<"\nShift top disk from tower "<<t1<<" to tower "<<t2<<"................count = "<<count++;
	//count++;
	TOH(d-1,t3,t2,t1);

}
int main(){
	int disk;
	cout<<"Enter the number of disk :";
	cin>>disk;

	if(disk<1)
		cout<<"\nNo disk to shift";
	else
		cout<<"\n"<<disk<<" disks to shift";

	TOH(disk,1,2,3);
	cout<<"\n\n"<<disk<<" disks in tower 1 is shifted to tower 2";
	cout<<"\nTotal number of counts : "<<count-1;
	return 0;
}
