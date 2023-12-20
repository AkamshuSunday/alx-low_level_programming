#include "main.h"

/**
 * custom_strcpy - Copies the string pointed to by src to dest.
 *
 * This function copies the string pointed to by src (including the null
 * terminator) to the buffer pointed to by dest.
 *
 * @param dest: Pointer to the destination buffer.
 * @param src: Pointer to the source string.
 * @return: Pointer to the destination buffer (dest).
 */
char *custom_strcpy(char *dest, char *src)
{
    int index_src = 0;
    int index_dest = 0;

    while (*(src + index_src) != '\0')
    {
        index_src++;
    }

    for (; index_dest < index_src; index_dest++)
    {
        dest[index_dest] = src[index_dest];
    }

    dest[index_src] = '\0';

    return dest;
}

