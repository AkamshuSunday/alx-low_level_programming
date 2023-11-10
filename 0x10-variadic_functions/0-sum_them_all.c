#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Calculate the sum of a variable number of parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to be summed.
 *
 * Return: If n is 0, return 0; otherwise, return the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list ap;
    unsigned int i, sum = 0;

    /* Initialize the variable argument list */
    va_start(ap, n);

    /* Sum up all the parameters */
    for (i = 0; i < n; i++)
        sum += va_arg(ap, int);

    /* Clean up the variable argument list */
    va_end(ap);

    return (sum);
}

