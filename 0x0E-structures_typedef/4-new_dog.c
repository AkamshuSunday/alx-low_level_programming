#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *new_dog = malloc(sizeof(dog_t));

    if (new_dog == NULL) {
        return NULL; /* Memory allocation failed */
    }

    /* Allocate memory for name and owner and copy the strings */
    new_dog->name = strdup(name);
    new_dog->owner = strdup(owner);

    if (new_dog->name == NULL || new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog->owner);
        free(new_dog);
        return NULL; /* Memory allocation for strings failed */
    }

    new_dog->age = age;
    return new_dog;
}
