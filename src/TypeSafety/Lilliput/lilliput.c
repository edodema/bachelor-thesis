#include <stdio.h>

int main() {
	short arr[] = {0, 1};
	int* p = &arr[0];
	printf("%u", *p);
}