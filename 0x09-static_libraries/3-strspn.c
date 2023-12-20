#include "main.h"

/**
 * custom_strspn - Calculates the length of the initial segment of s
 *                which consists entirely of characters in accept.
 *
 * This function mimics the behavior of the standard library function strspn().
 * It takes two strings, s and accept, and calculates the length of the initial
 * segment of s, which consists entirely of characters present in accept.
 *
 * @param s: The string to be checked.
 * @param accept: The string containing characters to match.
 * @return: The length of the initial segment of s consisting of characters in
 *          accept.
 */
unsigned int custom_strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int index;

    while (*s)
    {
        for (index = 0; accept[index]; index++)
        {
            if (*s == accept[index])
            {
                count++;
                break;
            }
            else if (accept[index + 1] == '\0')
            {
                return count;
            }
        }
        s++;
    }

    return count;
}

