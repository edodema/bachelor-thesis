#include <stdio.h>
#include <stdlib.h>
 
int main() {
	int *p = (int *)malloc(sizeof(int));
    int *q = p;
    free(p);
    // put unsafe code here pointed by p
    free(q);
}
     