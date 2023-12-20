#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z') /* Check if the char is
				   * within the range of uppercase letters
				  */
	return (1); /* Return 1 if it is uppercase */
	else
	return (0); /* Return 0 if it is not uppercase */
}
