#include <stdio.h>

/**
 * printString - Prints a given string followed by a newline.
 *
 * This function takes a string as input and prints it to the standard output
 * followed by a newline character.
 *
 * @param str: The string to be printed.
 */
void printString(char *str)
{
    puts(str);
}

/**
 * main - Entry point of the program.
 *
 * In this program, the main function calls the printString function to
 * print the message "Programming is like building a multilingual puzzle"
 * followed by a newline.
 *
 * @return: Returns 0 to indicate successful execution.
 */
int main(void)
{
    printString("\"Programming is like building a multilingual puzzle");
    return (0);
}

