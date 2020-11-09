#include <stdio.h>

int main() {
	int x;
	int *pi = &x;
	char *pc = &x;

	printf("%d\n", *pi);
	printf("%c\n", *pc);
}
