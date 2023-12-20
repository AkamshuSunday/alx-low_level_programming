#include "main.h"

/**
 * _memcpy - Copies a specified number of bytes from source to destination.
 *
 * This function copies 'n' bytes from the source memory area 'src' to the
 * destination memory area 'dest'. It iterates through the memory areas and
 * changes 'n' bytes.
 *
 * @param dest: Pointer to the destination memory area.
 * @param src: Pointer to the source memory area.
 * @param n: Number of bytes to copy.
 *
 * @return: A pointer to the destination memory area ('dest').
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    int destIndex = 0;
    int srcIndex = n;

    for (; destIndex < srcIndex; destIndex++)
    {
        dest[destIndex] = src[destIndex];
        n--;
    }

    return dest;
}

