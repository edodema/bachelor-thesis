#include <stdio.h>
#include <stdlib.h>

int main() {
	long tmp;
	{
		int n = 13;
		int *p_in = &n;
		printf("Interno:\t%p -> %d\n", p_in, *p_in);
		tmp = (long) p_in;
	}
	void * p_out = (void *) tmp;
	printf("Esterno:\t%p -> %d\n", p_out, * ((int *) p_out));
}
