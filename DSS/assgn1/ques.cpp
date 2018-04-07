#include<iostream>
#include<cstdlib>
#include<sys/time>

#define SIZE 100

using namespace std;

int arr[SIZE];
struct timeval start_time, stop-time;

int main(int argc, char* argc[]){
	for(int i=0; i<SIZE; i++)
		arr[i] = rand() % 1000;
	
	no_of_thread = atoi(argv[1]);

	cout<<"Taking "<< no_of_thread <<"threads ...";
	
	gettimeofday(&start_time,NULL);

	FOR()
}
