#include <stdlib.h>

#define KSIZE 1024

char kbuf[KSIZE];

void *memcpy(void *dest, void *src, size_t n);

int copy_from_kernel(void *user_dest, int maxlen) {   
    // len=min(KSIZE, maxlen)  
    int len = KSIZE < maxlen ? KSIZE : maxlen;
    memcpy(user_dest, kbuf, len);
    return len;
}