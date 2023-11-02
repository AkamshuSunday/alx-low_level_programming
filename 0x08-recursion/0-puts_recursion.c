#include <stdio.h>

void _puts_recursion(char *m) {
    if (*m == '\0') {
        putchar('\n'); /* it will print a new line when the end of the string is reached */
        return;
    }
    putchar(*m); /* the line will print the current character */
    _puts_recursion(m + 1); /* Recursive with the next character in the string */
}

