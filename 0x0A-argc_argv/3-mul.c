#include <stdio.h>
#include <stdlib.h>
/**
 * main - To multiplies two numbers
 * @argc: number of comman line argument
 * @argv: array that contains the program comman line argument
 * Return: (0) if successful
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
