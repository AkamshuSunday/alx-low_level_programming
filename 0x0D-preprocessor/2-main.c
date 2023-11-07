#include <stdio.h>

/**
 * main - prints the name of the file
 *
 * Return: Always 0 (Success)
 *
 *  The main function is the entry point of the program.
 *  In this case, it prints the name of the file using __FILE__.
 *
 *  The function returns 0 to indicate successful execution.
*/
int ain(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

