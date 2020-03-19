#include <stdio.h>
#include <stdlib.h>

int main() {
	long p;
	{
		int n = 13;
		p = (long) &n;
	}
	printf("%d\n", *(int *) p);
}
