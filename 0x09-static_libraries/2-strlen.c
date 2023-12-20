#include "main.h"

/**
 * custom_strlen - Calculates the length of a string.
 *
 * This function calculates and returns the length of the string 'str'.
 *
 * @param str: The input string.
 *
 * @return: The length of the string.
 */
int custom_strlen(char *str)
{
    int length = 0;

    while (*str != '\0')
    {
        length++;
        str++;
    }

    return length;
}

