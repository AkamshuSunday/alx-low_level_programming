#include "main.h"

/**
 * custom_strpbrk - Searches a string for any of a set of bytes.
 *
 * This function mimics the behavior of the standard library function strpbrk().
 * It scans the string s for the first occurrence of any character in the string accept.
 *
 * @param str: The string to be searched.
 * @param accept: The set of characters to search for.
 * @return: A pointer to the first occurrence in str of any character in accept,
 *          or NULL if no such character is found.
 */
char *custom_strpbrk(char *str, char *accept)
{
    while (*str)
    {
        for (int b = 0; accept[b]; b++)
        {
            if (*str == accept[b])
                return str;
        }
        str++;
    }
    return (0);
}
