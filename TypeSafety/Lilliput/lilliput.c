#include <stdio.h>

int main() {
	char a[] = {'a', 'b', 'c', 'd'};
	int * p = &a;
	printf("%d\n", *p);
}
