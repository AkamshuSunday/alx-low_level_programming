#include <stdio.h>
/**
 * main - this will print its name, with a new line
 * @argc: this is the number of the command line arguments.
 * @argv: this is an array that contains the command line argument
 * Return:: (0) when successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

