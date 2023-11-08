#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a pointer to function.
 * @name: The name to be printed.
 * @f: Pointer to the function for printing.
 *
 * Return: Nothing.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name); /* Call the function pointed to by 'f' with 'name' as argument */
}
