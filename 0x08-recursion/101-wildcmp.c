#include "main.h"

/**
 * wildcmp - Compares two strings considering wildcard pattern '*'
 * @s1: First string
 * @s2: Second string with wildcard pattern
 *
 * Return: 1 if the strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* If the first string is empty */
	if (*s1 == '\0')
	{
		/* If the second string is not empty and starts with '*', recursively check the next character */
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		/* If both strings are now empty, they match */
		return (*s2 == '\0');
	}

	/* If the character in the second string is '*' */
	if (*s2 == '*')
	{
		/* Try two possibilities: skip one character in the first string or skip one character in the second string */
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	/* If the characters in both strings match, move to the next characters */
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* If none of the above conditions are met, the strings do not match */
	return (0);
}
