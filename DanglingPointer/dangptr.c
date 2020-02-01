#include <stdio.h>
#include <stdlib.h> 

int main() {
	int *ptr = malloc(sizeof(int));
	printf("Prima free:\t%p\n", ptr);
	free(ptr);
	printf("Dopo free:\t%p\n", ptr);
}
