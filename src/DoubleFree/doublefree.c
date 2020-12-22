#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct User User;

struct User {
    User * self; 
    char name[8];
};

int main(int argc, char** argv) {

    // (1) Guido si iscrive 
    struct User * Guido = malloc(sizeof(struct User));
    Guido->self = Guido;
    strcpy(Guido->name, "Guido");

    printf(
        "Guido: [self: %p, name: %s]\n", 
        Guido->self, Guido->name
    );

    // (2) Guido libera la sua memoria
    free(Guido); 

    // (3) Luisa si iscrive 
    struct User * Luisa = malloc(sizeof(struct User));
    Luisa->self = Luisa;
    strcpy(Luisa->name, "Luisa");
    
    printf(
        "Luisa: [self: %p, name: %s]\n", 
        Luisa->self, Luisa->name
    );

    // (4) Guido libera la memoria di Luisa
    free(Guido);

    // (5) Carla si iscrive sulla memoria di Luisa
    struct User * Carla = malloc(sizeof(struct User));
    Carla->self = Carla;
    strcpy(Carla->name, "Carla");

    printf(
        "Carla: [self: %p, name: %s]\n", 
        Carla->self, Carla->name
    );
    printf(
        "Luisa: [self: %p, name: %s]\n", 
        Luisa->self, Luisa->name
    );
}