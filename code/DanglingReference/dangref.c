#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Message {
	char from[8];
	char to[8];
	char text[32];
};

void send_message(char * from, char * to, char * text) {
	struct Message * mess = malloc(sizeof(struct Message));
	strcpy(mess->from, from);
	strcpy(mess->to, to);
	strcpy(mess->text, text);
	printf("%p\n", mess);
}

int main() {
	send_message("Guido", "Carla", "asa nisi masa");

	char * ptr;
	printf("> ");
	scanf("%p", &ptr);

	printf("[%s, %s, %s]\n", ptr, ptr+8, ptr+16);
}