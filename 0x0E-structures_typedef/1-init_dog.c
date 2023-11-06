#include "dog.h"
/*  *d is a pointer to the structure */
void init_dog(struct dog *d, char *name, float age, char *owner) {
    d->name = name;
    d->age = age;
    d->owner = owner;
}

