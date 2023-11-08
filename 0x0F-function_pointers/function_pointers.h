#ifndef FUNCTION_POINTERS_H
	#define FUNCTION_POINTERS_H


	#include <stddef.h>
	#include <stdlib.h>

/** 
   The following code uses an include guard to prevent multiple inclusions
   of this header file. If FUNCTION_POINTERS_H has not been defined yet, it gets defined here.
 *
 * void print_name(char *name, void (*f)(char *));
 * 
 * Function prototype for print_name, which takes a string 'name' and a pointer
 * to a function 'f' that accepts a character pointer as an argument and returns
 * nothing.
 *
 * int _putchar(char c); Function prototype for _putchar, 
 * which outputs a single character to stdout.
 *
 * void array_iterator(int *array, size_t size,
 * void (*action)(int)); Function prototype for array_iterator, 
 * which takes an integer array 'array',
 * its size 'size', and a pointer to a function 'action' that accepts an integer
 * as an argument and returns nothing.
 *
 * int int_index(int *array, int size, int (*cmp)(int)); Function prototype for int_index, 
 * which takes an integer array 'array', its
 * size 'size', and a pointer to a function 'cmp' that accepts an integer as an
 * argument and returns an integer.
 *
 * #endif- This marks the end of the header file. The #endif corresponds to the #ifndef 
 * at the beginning, effectively closing the include guard.
 */

void print_name(char *name, void (*f)(char *));
	int _putchar(char c);
	void array_iterator(int *array, size_t size, void (*action)(int));
	int int_index(int *array, int size, int (*cmp)(int));


	#endif

