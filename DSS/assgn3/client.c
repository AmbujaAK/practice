#include <stdio.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <signal.h>
#include <semaphore.h>
#define SHM_PATH "shm_file"
#define PERMISSION 0666
#define SEMAPHORE_INITIAL_VALUE 1

sem_t *semaphore_ptr;
struct shared_mem {
    int counter;
};

void error_handler(char *msg){
	printf("Error in %s\n", msg);
}

void callback_methods(int signal)
{
	if ( shm_unlink("semaphore") < 0 ){
		error_handler("shm_unlink");
	}
	if ( sem_close(semaphore_ptr) < 0 ){
		error_handler("sem_close");
	}
	if ( sem_unlink("semaphore") < 0 ){
		error_handler("sem_unlink");
	}
	exit(signal);
}


int main(int argc, char *argv[]) {
    int shmfd;
    int shared_segment_size = (1 * sizeof(struct shared_mem));
    struct shared_mem *shared_ptr;

    signal(SIGINT, callback_methods);

    shmfd = shm_open(SHM_PATH, O_CREAT | O_RDWR, PERMISSION);
    if (shmfd < 0) {
        error_handler("In shm_open()");
        exit(1);
    }

    fprintf(stderr, "Created shared memory object %s\n", SHM_PATH);

    ftruncate(shmfd, shared_segment_size);
	
	semaphore_ptr=sem_open("semaphore", O_CREAT, PERMISSION, SEMAPHORE_INITIAL_VALUE);
	
    shared_ptr = (struct shared_mem *)mmap(NULL, shared_segment_size, PROT_READ | PROT_WRITE, MAP_SHARED, shmfd, 0);
    if (shared_ptr == NULL){
        error_handler("In mmap()");
        exit(1);
    }
    fprintf(stderr, "Shared memory segment allocated correctly (%d bytes).\n", shared_segment_size);

    shared_ptr->counter=0;
 
    while(1){
		sleep(2);
		printf("Client: Waiting \n");
		sem_wait(semaphore_ptr);
		printf("Client: Locked, About to sleep \n");
		printf("Client count : %d \n",shared_ptr->counter + 1);
		sleep(2);
		sem_post(semaphore_ptr);
		printf("Client: Posting \n");
    }

    if (shm_unlink(SHM_PATH) != 0) {
        error_handler("In shm_unlink()");
        exit(1);
    }
    if ( sem_close(semaphore_ptr) < 0 ) {
    	error_handler("sem_close");
    }
    if ( sem_unlink("semaphore") < 0 ) {
    	error_handler("sem_unlink");
    }

    return 0;
}
