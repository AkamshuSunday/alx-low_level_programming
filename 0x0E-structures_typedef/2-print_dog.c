#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d) {
    if (d == NULL) {
        return; /* it will do nothing if d is NULL */
    }

    printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
    printf("Age: %.1f\n", d->age);
    printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
i
