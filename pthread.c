#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

void *process(void * arg)
{
    for(;;)
    {
        printf("Ya casi nos vamos!!!\n");
    }
    return NULL;
}

void *process_2(void * arg)
{
    for(;;)
    {
        printf("WUUUW!!!\n");
    }
    return NULL;
}

int main(int argv, char * argc[])
{
    pthread_t my_thread, my_thread_2;
    int ret = pthread_create(&my_thread, NULL, process, NULL);
    ret     = pthread_create(&my_thread_2, NULL, process_2, NULL);
    ret     = pthread_join(my_thread, NULL);
    ret     = pthread_join(my_thread_2, NULL);
    return 0;
}