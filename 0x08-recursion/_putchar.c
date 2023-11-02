#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output
 * c is the character to be printed
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char c) {
    return write(1, &c, 1);
}

