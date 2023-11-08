#include "main.h"
#include <unistd.h>
       
 /**
  * This line includes the header file "main.h", which contains function
  * prototypes and definitions needed for this program.
  *
  * This line includes the standard header file "unistd.h", which provides
  * access to the POSIX operating system API.
  *
  * In this case, it's used for the write() system call.
  *
  * _putchar - writes the character c to stdout
  * @c: The character to print
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  *
  * int _putchar(char c)-The function _putchar takes a single character 'c' as an argument.
  * It writes the character 'c' to the standard output (stdout) using
  * the write() system call.
  *
  * Return: On success, it returns 1. On error, -1 is returned and errno
  * is set appropriately.
  */



int _putchar(char c)
{
	return (write(1, &c, 1));
}

