#include "main.h"

/**
 * custom_strncpy - Copies a string up to a specified number of characters.
 *
 * This function copies up to 'n' characters from the string 'src' to the
 * string 'dest'. If 'src' contains fewer than 'n' characters, the remaining
 * characters in 'dest' are filled with null bytes.
 *
 * @param dest: The destination string.
 * @param src: The source string.
 * @param n: The number of characters to copy.
 *
 * @return: The pointer to the destination string.
 */
char *custom_strncpy(char *dest, char *src, int n)
{
    int index = 0;

    while (index < n && src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }

    while (index < n)
    {
        dest[index] = '\0';
        index++;
    }

    return dest;
}

