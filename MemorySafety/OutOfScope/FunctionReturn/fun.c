#include <stdio.h>

int * ret() {
	int n = 42;
	int * p = &n;
	return p;
}

int main() {
	int * p = ret();
	printf("%d\n", *p);
}
