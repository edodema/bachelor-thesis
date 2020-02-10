#include <stdio.h>

int main() {
	int arr[4];
	for(int i=0; i <= 4; i++) arr[i]=i;
	for(int i=0; i <= 4; i++) printf("arr[%d]: %d\n", i, arr[i]);
}
