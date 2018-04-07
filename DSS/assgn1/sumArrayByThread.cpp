#include<iostream>
#include<stdlib.h>
#include<pthread.h>
#include<sys/time.h>

#define MAX 100

//#define no_of_thread 5

using namespace std;

int part=0;

int no_of_thread ;

int sum[no_of_thread];

int arr[MAX];

void* sum_of_array(void* arg){

	int thread_part  = part++;
	int sum_of_part =0;
	
	for (int i = thread_part * ( MAX / no_of_thread); i < (thread_part + 1) * (MAX / no_of_thread); i++)
		sum[thread_part] += arr[i];
	
	
}

int main(int  argc, char *argv[]){

        for(int i=0; i<MAX; i++){
                arr[i] = rand() % 100;
        }
	
	no_of_thread = atoi(argv[1]);

	pthread_t threads[no_of_thread];

	for(int i=0; i < no_of_thread; i++)
		pthread_create(&threads[i], NULL, sum_of_array, (void*)NULL);

	for(int i=0; i < no_of_thread; i++)
		pthread_join(threads[i],NULL);

	int total_sum = 0;
	
	struct timeval start_t , stop_t;

	gettimeofday(&start_t,NULL);
	
	for(int i=0; i < no_of_thread; i++)
		total_sum += sum[i];

	gettimeofday(&stop_t,NULL);

	int time_taken = stop_t.tv_usec - start_t.tv_usec;
	
	cout<<"Total sum is :"<< total_sum<<endl;
	cout<<"Total time taken :"<<time_taken;
}
