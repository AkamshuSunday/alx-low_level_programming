#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * dest- Destination string to which src will be appended.
 * src- Source string to be appended to dest.
 *
 * @return: Pointer to the resulting concatenated string (dest).
 */

char *_strcat(char *dest, char *src)
{
	int dest_index, src_index;

	dest_index = 0;
	while (dest[dest_index] != '\0')
	{
		dest_index++;
	}

		src_index = 0;
	while (src[src_index] != '\0')
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}
		dest[dest_index] = '\0';
return (dest);
}
