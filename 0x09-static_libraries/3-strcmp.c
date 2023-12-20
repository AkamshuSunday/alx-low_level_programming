#include "main.h"

/**
 * compareStrings - Compares two strings.
 *
 * This function takes two strings as input and compares them character by
 * character. It returns the difference between the ASCII values of the first
 * differing characters or 0 if the strings are identical.
 *
 * @param str1: The first string to be compared.
 * @param str2: The second string to be compared.
 * @return: The difference between the ASCII values of the first differing
 *          characters or 0 if the strings are identical.
 */
int compareStrings(char *str1, char *str2)
{
    int index = 0;

    while (str1[index] != '\0' && str2[index] != '\0')
    {
        if (str1[index] != str2[index])
        {
            return (str1[index] - str2[index]);
        }
        index++;
    }
    
    return 0;
}

