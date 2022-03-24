#include<stdio.h>

#include<pthread.h>
void *printhello(void *threadid)
{
printf("\nhello world\n");
while(1);
}
int main()
{
pthread_t thread;
int rc,t=0;
printf("creating thred \n");
rc = pthread_create(&thread,NULL,printhello,NULL);
printf("\n thread ID :%u", thread);
sleep(6);
t = pthread_cancel(pthread_self);
if(t==0)
{
printf("\n cancled threa\n");
}
printf("\nthread ID : %u\n",thread);
}
