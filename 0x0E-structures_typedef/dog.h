#ifndef DOG_H
#define DOG_H

struct dog {
    char *name; /*name of the dog */
    float age;/* age of the dog */
    char *owner; /* owner of the dog */
};

#endif

#include <stdio.h>
#include <stdlib.h>

int main() {
 struct dog my_dog = {
        .name = "Hero",
        .age = 4.5,
        .owner = "Akamshu Sunday"
    };
 typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

    printf("Dog's name: %s\n", my_dog.name);
    printf("Dog's age: %.1f\n", my_dog.age);
    printf("Dog's owner: %s\n", my_dog.owner);

    return 0;
}
