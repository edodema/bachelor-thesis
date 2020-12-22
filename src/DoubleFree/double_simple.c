#include <stdlib.h>

int main() {
    char *ptr = malloc(sizeof(char));
    *ptr = 'a';
    free(ptr);
    free(ptr);
}