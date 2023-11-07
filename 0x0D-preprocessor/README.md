**Project Requirements**

**General:**
- Use any of the allowed editors: vi, vim, emacs.
- Code will be compiled on Ubuntu 20.04 LTS using gcc with specific options (-Wall -Werror -Wextra -pedantic -std=gnu89).
- All files should end with a new line.
- A mandatory README.md file should be present at the root of the project folder.

**Coding Style:**
- Code should adhere to the Betty style guide and will be checked using betty-style.pl and betty-doc.pl.
- Avoid the use of global variables.
- Limit each file to no more than 5 functions.

**Standard Library Functions:**
- Only use `malloc`, `free`, and `exit` from the C standard library. Functions like `printf`, `puts`, `calloc`, `realloc`, etc., are not allowed.

**Allowed Function:**
- You're allowed to use `_putchar`. No need to push `_putchar.c`, as we will use our own file.

**Testing:**
- Provided `main.c` files are examples for testing. You can use them for testing purposes, but it's not necessary to push them to your repository. We will use our own `main.c` files for compilation, which may differ from the examples.

**Submission:**
- Ensure to push your header file.
- All header files should be include guarded.

---
TASKS

0. Object-like Macro
Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

1. Pi
Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

2. File name
Write a program that prints the name of the file it was compiled from, followed by a new line.
You are allowed to use the standard library

3. Function-like macro
Write a function-like macro ABS(x) that computes the absolute value of a number x.

4. SUM
Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.





======================================

0-object_like_macro.h CODE

/*
#ifndef OBJECT_LIKE_MACRO_H
#define OBJECT_LIKE_MACRO_H

#define SIZE 1024

#endif



======================================

1-pi.h CODE


#ifndef PI_H
#define PI_H

#define PI 3.14159265359

#endif



======================================

2-main.c CODE


#include <stdio.h>

/**
 * main - prints the name of the file
 *
 * Return: Always 0 (Success)
 */
int ain(void)
{
	printf("%s\n", __FILE__);
	return (0);
}




======================================

3-function_like_macro.h CODE


#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) ((x) < (0) ? -(x) : (x))

#endif



======================================

4-sum.h CODE


#ifndef SUM_H
#define SUM_H

#define SUM(x, y) ((x) + (y))

#endif
*/

