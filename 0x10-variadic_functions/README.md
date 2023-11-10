## README

### Task 0: Beauty is variable, ugliness is constant

Create a function that calculates the sum of its parameters. The function prototype is `int sum_them_all(const unsigned int n, ...)`. If `n` is 0, the function should return 0.

### Task 1: To be is to be the value of a variable

Implement a function named `print_numbers` that prints a specified number of integers, separated by a given string. The prototype is `void print_numbers(const char *separator, const unsigned int n, ...)`. If the separator is NULL, it should not be printed. Ensure to print a new line at the end of the function.

### Task 2: One woman's constant is another woman's variable

Develop a function called `print_strings` that prints a specified number of strings, separated by a given string. The prototype is `void print_strings(const char *separator, const unsigned int n, ...)`. If the separator is NULL, it should not be printed. If a string is NULL, print "(nil)" instead. End the function with a new line.

### Task 3: To be is a to be the value of a variable

Create a function named `print_all` that prints a list of variables based on the provided format. The prototype is `void print_all(const char * const format, ...)`. The format specifies the types of arguments passed to the function:

- `c`: char
- `i`: integer
- `f`: float
- `s`: char * (print "(nil)" if the string is NULL)
  
