#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value.
 *
 * @param s: Starting address of memory to be filled.
 * @param b: The desired value.
 * @param n: Number of bytes to be changed.
 *
 * @return: The modified array with the new value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
    int index = 0;

    for (; n > 0; index++)
    {
        s[index] = b;
        n--;
    }

    return (s);
}

