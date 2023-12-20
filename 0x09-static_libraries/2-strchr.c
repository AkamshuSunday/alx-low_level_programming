#include "main.h"

/**
 * custom_strchr - Locates the first occurrence of
 * a character in a string.
 *
 * This function searches for the first occurrence
 * of the character 'c'
 * in the string 'str'. The terminating null character
 * is considered part of the string.
 *
 * @param 'str': The string to be searched.
 * @param c: The character to be located.
 *
 * @return: A pointer to the first
 * occurrence of 'c' in 'str', or NULL if not found.
 */

char *custom_strchr(char *str, char c)
{
	int a = 0;

	for (; str[a] != '\0'; a++)
	{
		if (str[a] == c)
			return (&str[a]);
	}
	return (0);
}
