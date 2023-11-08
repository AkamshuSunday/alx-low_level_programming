#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 *
 * Return: None.
 *
 * _print_rev_recursion(s + 1); Recursively move to the end of the string 
 * _putchar(*s); Print characters in reverse order 
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

