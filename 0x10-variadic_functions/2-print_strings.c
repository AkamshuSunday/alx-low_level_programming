#include "variadic_functions.h"
	#include <stdio.h>
	#include <stdarg.h>
/**
 * print_strings - This function prints a series of strings followed by a new line.
 * @separator: The string to be printed between strings. Set to NULL for no separator.
 * @n: The total number of strings to be printed.
 * @...: A variable number of strings to be printed.
 *
 * Description: The function uses variable arguments to handle an arbitrary number of strings.
 * If a separator is provided and the current string is not the last one, the separator is printed
 * between the strings. If a string is NULL, the function prints "(nil)" instead of the null string.
 * Finally, a new line is printed at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list strings;
    char *str;
    unsigned int index;

    /* Initialize the variable argument list */
    va_start(strings, n);

    for (index = 0; index < n; index++)
    {
        /* Retrieve the current string */
        str = va_arg(strings, char *);

        /* Print "(nil)" if the string is NULL, otherwise print the string */
        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);

        /* Print the separator if not the last string and separator is not NULL */
        if (index != (n - 1) && separator != NULL)
            printf("%s", separator);
    }

    /* Print a new line at the end */
    printf("\n");

    /* Clean up the variable argument list */
    va_end(strings);
}

