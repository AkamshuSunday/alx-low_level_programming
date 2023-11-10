#include "variadic_functions.h"
	#include <stdarg.h>
	#include <stdio.h>
/**
 * print_all - This function prints a sequence of values based on the given format.
 * @format: A string specifying the types of arguments to be printed.
 *
 * Description: The function uses variable arguments to print a list of values according to
 * the format string. The format string includes the following specifiers:
 *   - 'c': char
 *   - 'i': integer
 *   - 'f': float
 *   - 's': string (NULL strings are handled and printed as "(nil)")
 * Any other characters in the format are ignored. Values are separated by a comma and space.
 * The printed sequence is followed by a new line.
 */
void print_all(const char * const format, ...)
{
    int i = 0;
    char *str, *sep = "";

    va_list list;

    /* Initialize the variable argument list */
    va_start(list, format);

    if (format)
    {
        while (format[i])
        {
            switch (format[i])
            {
                case 'c':
                    printf("%s%c", sep, va_arg(list, int));
                    break;
                case 'i':
                    printf("%s%d", sep, va_arg(list, int));
                    break;
                case 'f':
                    printf("%s%f", sep, va_arg(list, double));
                    break;
                case 's':
                    str = va_arg(list, char *);
                    if (!str)
                        str = "(nil)";
                    printf("%s%s", sep, str);
                    break;
                default:
                    i++;
                    continue;
            }
            sep = ", ";
            i++;
        }
    }

    /* Print a new line at the end */
    printf("\n");

    /* Clean up the variable argument list */
    va_end(list);
}

