#include "main.h"

/**
 * custom_abs - Computes the absolute value of an integer.
 *
 * This function calculates and returns the absolute value of the given integer.
 *
 * @param number: The integer to compute the absolute value.
 * @return: The absolute value of the input integer.
 */
int custom_abs(int number)
{
    if (number >= 0)
    {
        return number;
    }
    return -number;
}

