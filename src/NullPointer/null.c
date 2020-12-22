#include <stdio.h>

int main() {
    void* ptr = NULL;
    printf("%p\n", ptr);
    printf("%d\n", * (int *) ptr);
}