#include <stdio.h>
#include <stdlib.h>

void f() {
	int *arr = malloc(sizeof(int));
	int *p = arr;
	*p = 2;
}

int main() {
	f();
}
