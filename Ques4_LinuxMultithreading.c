#include<pthread.h>
#include<stdio.h>

pthread_once_t once = PTHREAD_ONCE_INIT;

void *myinit()
{
printf("\n i am in my thread: %d\n ");
printf("\n exxit form mythread : %d\n",(int *)1);
}
int main()
{
pthread_t thread,thread1,thread2;
pthread_t pthread_self();
printf("the thread id is:%d\n",pthread_self());
printf("the pid of process is:%d\n",getpid());


}
