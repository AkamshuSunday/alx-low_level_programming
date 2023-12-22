#include <stdio.h>
/**
 * main - will print all arguments it receives
 * @argc: number of comman line argument
 * @argv: array that contains the program comman line argument
 * Return: (0) if successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
