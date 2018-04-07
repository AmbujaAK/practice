#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdlib.h>
#include <sys/time.h>

using namespace std;
struct timeval start_t, stop_t;
#define N_Items  10000000

int    num_threads;
int    start[100];
vector<int> x(N_Items,0);
long long int total_sum=0;
pthread_t tid[100];
pthread_mutex_t mSum = PTHREAD_MUTEX_INITIALIZER;

/*  Find the sum  among my number
    The sum is stored in sum[s]  */
void *worker(void *arg) {
// pthread_mutex_lock(&mSum);
   int i, s;
   int n, start, stop;
   long long int my_sum=0;

   n = N_Items/num_threads;
   s = * (int *) arg;// s can be one of 0, 1, 2, ...(num_threads-1)
   start = s * n;

   if ( s != (num_threads-1) )
      stop = start + n;
   else
      stop = N_Items;

   my_sum = x[start];
   for (i = start+1; i < stop; i++ )
         my_sum+=x[i];

   pthread_mutex_lock(&mSum);
   total_sum+=my_sum;
   pthread_mutex_unlock(&mSum);

   return(NULL);
}

int main(int argc, char *argv[]) {
   int i;
   long long int my_sum;
   int elapsed;

   /*Check command line */
   if ( argc != 2 ){
      std::cout << "Usage: " << argv[0] << " Num_Threads" << std::endl;
      exit(1);
   }
 /* Generate random number */
   for (i = 0; i < N_Items; i++)
      x[i] = rand()%2 + 1;

   num_threads = atoi(argv[1]);
   std::cout << "Using" << num_threads << " threads..." << std::endl <<std::endl;

   gettimeofday(&start_t, NULL);

   /*  Create threads  */
 for (i = 0; i < num_threads; i = i + 1){
      start[i] = i;
      if ( pthread_create(&tid[i], NULL, worker, (void *)&start[i]) ) {
        std:: cout << "Cannot create thread" << std::endl;
         exit(1);
      }
   }

   for (i = 0; i < num_threads; i = i + 1)
      pthread_join(tid[i], NULL);

   gettimeofday(&stop_t, NULL);

   elapsed = (stop_t.tv_sec*1000000 + stop_t.tv_usec) -
                (start_t.tv_sec*1000000 + start_t.tv_usec);

   std::cout << "sum = " << total_sum << std::endl << std::endl;
   std::cout << "Time taken = " << elapsed << " microseconds"<<std::endl;
}
