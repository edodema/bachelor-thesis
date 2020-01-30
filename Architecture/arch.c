#include <stdio.h> 

int main() {
	int i = 1;
	int j = 1;
	
	while(i > 0) {
		i *= 2;
		j++;
	}
	printf("Computer has a %d bit architecture.\n", j);
}
