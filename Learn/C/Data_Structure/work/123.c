#include <stdio.h>
#include <pthread.h>

void *myThread(void *arg)
{
    printf("Hello from thread %ld\n", (long)arg);
    return NULL;
}

int main()
{
    int i = 1;
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, myThread, (void *)1);
    pthread_create(&thread2, NULL, myThread, (void *)2);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    return 0;
}