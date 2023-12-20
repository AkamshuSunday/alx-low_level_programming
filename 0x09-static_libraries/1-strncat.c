#include "main.h"

/**
 * _strncat_custom - Concatenates two strings,
 * using at most n bytes from source.
 * This function appends the first 'n' characters
 * from the source string 'source'
 * to the end of the destination string 'destination'. 
 * It ensures that the resulting
 * string is null-terminated.
 * @param destination: The destination string.
 * @param source: The source string.
 * @param n: The maximum number of bytes to concatenate from source.
 * @return: A pointer to the resulting string 'destination'.
 */
char *_strncat_custom(char *destination, char *source, int n)
{
	int destIndex = 0;
	int srcIndex = 0;
	
	while (destination[destIndex] != '\0')
    {
        destIndex++;
    }
	while (source[srcIndex] != '\0' && srcIndex < n)
    {
        destination[destIndex] = source[srcIndex];
        destIndex++;
        srcIndex++;
    }

    destination[destIndex] = '\0';

    return (destination);
}

