#include <stdlib.h>
	#include "dog.h"


	/**
	* init_dog is a function that sets up a variable of the struct dog type. 
	* It takes four parameters:
	* @d: a pointer to the struct dog that needs to be initialized.
	* name: the value to assign to the name member of the structure.
	* age: the value to assign to the age member of the structure.
	* owner: the value to assign to the owner member of the structure.
	*/
	void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

