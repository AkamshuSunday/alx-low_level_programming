#ifndef MAIN_H
#define MAIN_H

 /**
   * The following code uses an include guard to prevent multiple inclusions
   * of this header file. If MAIN_H has not been defined yet, it gets defined here.
   *
   * void _puts_recursion(char *s); Function prototype for _puts_recursion, 
   * which recursively prints a string.
   *
   * int _putchar(char c); Function prototype for _putchar, 
   * which outputs a single character to stdout.
   *
   * void _print_rev_recursion(char *s); Function prototype for _print_rev_recursion, 
   * which recursively prints a string in reverse.
   *
   * int _strlen_recursion(char *s); Function prototype for _strlen_recursion, 
   * which recursively computes the length of a string.
   *
   * int factorial(int n); Function prototype for factorial, 
   * which recursively computes the factorial of a number.
   *
   * int _pow_recursion(int x, int y); Function prototype for _pow_recursion, 
   * which recursively computes x raised to the power of y.
   *
   * int _sqrt_recursion(int n); Function prototype for _sqrt_recursion, 
   * which recursively computes the square root of a number.
   *
   * int is_prime_number(int n); Function prototype for is_prime_number, 
   * which checks if a number is prime.
   *
   * int is_palindrome(char *s); Function prototype for is_palindrome, 
   * which checks if a string is a palindrome.
   *
   * #endif- This marks the end of the header file. The #endif corresponds to the #ifndef 
   * at the beginning, effectively closing the include guard.
   */

int _pow_recursion(int x, int y);
int _putchar(char c);
void _print_rev_recursion(char *s);
void _puts_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int is_palindrome(char *s);
int is_prime_number(int n);
int _sqrt_recursion(int n);

#endif
