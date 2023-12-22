#include <stdio.h>
/**
 * main - this prints the number of arguments passed into it.
 * @argv: this is the array that contains the program command line arg...
 * @argc: this is the number of command line argument.
 * Return: (0) when successful.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
