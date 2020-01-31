#include <stdio.h> 

int main() {
	int n = 1;
	int i = 1;
	
	while(n > 0) {
		n *= 2;
		i++;
	}
	printf("Computer has a %d bit architecture.\n", i);
}
