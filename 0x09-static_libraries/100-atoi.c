#include "main.h"

/**
 * custom_atoi - Converts a string into an integer.
 *
 * This function converts the initial portion of the string pointed to by s to
 * its integer representation.
 *
 * @param s: Pointer to the string to convert.
 * @return: The converted integer.
 */
int custom_atoi(char *s)
{
    int sign = 1;           // Variable to store the sign of the number
    int index = 0;          // Index to iterate through the string
    unsigned int result = 0; // Variable to store the result

    // Check for the sign of the number
    while (!(s[index] <= '9' && s[index] >= '0') && s[index] != '\0')
    {
        if (s[index] == '-')
            sign *= -1;
        index++;
    }

    // Convert the string to an integer
    while (s[index] <= '9' && (s[index] >= '0' && s[index] != '\0'))
    {
        result = (result * 10) + (s[index] - '0');
        index++;
    }

    result *= sign; // Apply the sign to the result
    return result;
}

