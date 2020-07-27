#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

typedef struct {
    int v;
    int* ptr;
}Misc;

// global 
const int accum = 0;
pthread_mutex_t accum_mutex = PTHREAD_MUTEX_INITIALIZER;

// func
void* func(void* x) {
    Misc* xm = (Misc*) x;

    pthread_mutex_lock(&accum_mutex);
    *xm->ptr += xm->v;
    pthread_mutex_unlock(&accum_mutex);
    return NULL;
}

int main() {
    pthread_t ths[20];
    Misc misc[20];
    int i;

    for(i=0; i < 20; i++) {
        misc[i].v = i;
        misc[i].ptr = &accum;
        
        pthread_create(&ths[i], NULL, func, &misc[i]);
    }

    for(i=0; i < 20; i++) {
        void* res;
        pthread_join(ths[i], &res);
    }
    printf("accum = %d\n", accum);
}