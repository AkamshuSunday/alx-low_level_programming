#include <stdio.h>

/**
 * main - prints the name of the file
 *
 * Return: Always 0 (Success)
 */
int ain(void)
{
    /* 
       The main function is the entry point of the program.
       In this case, it prints the name of the file using __FILE__.
    */
	printf("%s\n", __FILE__);
	return (0); 
	/* 
	   The function returns 0 to indicate successful execution.
	*/
}

