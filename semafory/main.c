#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/types.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

#define BUF_SIZE 1024
#define SHM_KEY 0x1234
#define SEM_KEY 0x54321

void shared_memory_cntr_increment(int, struct shmseg*, int);
void remove_semaphore();

struct shmseg {
   int cnt;
   int complete;
   char buf[BUF_SIZE];
};

struct sembuf {
   unsigned short sem_num;
   short sem_op;
   short sem_flg;
};

struct semid_ds {
   struct ipc_perm sem_perm; /* Permissions */
   time_t sem_otime; /* Last semop time */
   time_t sem_ctime; /* Last change time */
   unsigned long sem_nsems; /* Number of semaphores in the set */
};

int main(int argc, char *argv[]) {

   char *message = NULL;
   size_t len = 0;
   int filled_count;

   int shmid;
   int semid;
   int retval;
   struct shmseg *shmp;
   struct sembuf sem_buf;
   struct semid_ds buf;
   char *bufptr;
   int spaceavailable;

   shmid = shmget(SHM_KEY, sizeof(struct shmseg), 0644|IPC_CREAT);
   shmp = shmat(shmid, NULL, 0);
   semid = semget(SEM_KEY, 1, IPC_CREAT | IPC_EXCL | 0666);
   bufptr = shmp->buf;
   spaceavailable = BUF_SIZE;

   if (semid >= 0) {
      printf("First Process\n");
      sem_buf.sem_op = 1;
      sem_buf.sem_flg = 0;
      sem_buf.sem_num = 0;
      retval = semop(semid, &sem_buf, 1);
      if (retval == -1) {
         perror("Semaphore Operation: ");
         return;
      }
   } else if (errno == EEXIST) { // Already other process got it
      int ready = 0;
      printf("Second Process\n");
      semid = semget(SEM_KEY, 1, 0);
      if (semid < 0) {
         perror("Semaphore GET: ");
         return;
      }

   while((getline(&message, &len, stdin)) != -1)
   {
      strcpy(bufptr, message);
      bufptr[spaceavailable-1] = '\0';
      shmp->cnt = strlen(bufptr);
      shmp->complete = 0;

      printf("Wrote %d bytes\n\n", shmp->cnt);
   }
   shmp->complete = 1;
   free(message);
   shmdt(shmp);
   remove_semaphore();
   return 0;

}

void remove_semaphore() {
   int semid;
   int retval;
   semid = semget(SEM_KEY, 1, 0);
      if (semid < 0) {
         perror("Remove Semaphore: Semaphore GET: ");
         return;
      }
   retval = semctl(semid, 0, IPC_RMID);
   if (retval == -1) {
      perror("Remove Semaphore: Semaphore CTL: ");
      return;
   }
   return;
}
   }