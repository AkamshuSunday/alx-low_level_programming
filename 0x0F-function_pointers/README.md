PROJECT REQUIREMENTS

Task 0: Print Name
Write a function that prints a name.
- Prototype: `void print_name(char *name, void (*f)(char *));`

Task 1: Array Iterator
Write a function that executes a function given as a parameter on each element of an array.
- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
- Where `size` is the size of the array and `action` is a pointer to the function to be used.

Task 2: Integer Search
Write a function that searches for an integer.
- Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
- Where `size` is the number of elements in the array `array`.
- `cmp` is a pointer to the function used for value comparison.
- `int_index` returns the index of the first element for which the `cmp` function does not return 0.
- If no element matches, return -1.
- If `size` is less than or equal to 0, return -1.

Task 3: Simple Calculator
Write a program that performs simple operations.
- Usage: `calc num1 operator num2`
- You can assume `num1` and `num2` are integers, so use the `atoi` function to convert them from string input to int.
- The `operator` can be one of the following: + (addition), - (subtraction), * (multiplication), / (division), % (modulo).
- The program prints the result of the operation, followed by a new line.
- If the number of arguments is incorrect, print "Error" and exit with status 98.
- If the operator is not one of the specified symbols, print "Error" and exit with status 99.
- If the user tries to divide (/ or %) by 0, print "Error" and exit with status 100.

Task 4: Print Opcodes
Write a program that prints the opcodes of its own main function.
- Usage: `./main number_of_bytes`
- The opcodes should be printed in hexadecimal, lowercase, with each opcode being two characters long.
- The listing ends with a new line.
- If the number of arguments is incorrect, print "Error" and exit with status 1.
