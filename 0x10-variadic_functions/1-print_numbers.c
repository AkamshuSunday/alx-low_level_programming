#include "variadic_functions.h"
	#include <stdio.h>
	#include <stdarg.h>
/**
 * print_numbers - This function prints a series of numbers followed by a new line.
 * @separator: The string to be printed between numbers. Use NULL for no separator.
 * @n: The total number of integers to be printed.
 * @...: A variable number of integers to be printed.
 * 
 * The function utilizes variable arguments to handle an arbitrary number of integers.
 * It iterates through the given number of integers, printing each one. If a separator
 * is provided and the current integer is not the last one, the separator is printed 
 * between the numbers. Finally, a new line is printed at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list nums;
    unsigned int index;

    /* Initialize the variable argument list */
    va_start(nums, n);

    for (index = 0; index < n; index++)
    {
        /* Print the current number */
        printf("%d", va_arg(nums, int));

        /* Print the separator if not the last number and separator is not NULL */
        if (index != (n - 1) && separator != NULL)
            printf("%s", separator);
    }

    /* Print a new line at the end */
    printf("\n");

    /* Clean up the variable argument list */
    va_end(nums);
}

