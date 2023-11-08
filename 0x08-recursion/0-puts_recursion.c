#include "main.h"
/**
 * _puts_recursion - Prints a string using recursion.
 * @s: The input string.
 *
 * Return: None.
 *
 * _putchar(*s); Print the current character
 * _puts_recursion(s + 1); Recur with the next character
 * _putchar('\n'); Print a newline character when end of string is reached 
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

