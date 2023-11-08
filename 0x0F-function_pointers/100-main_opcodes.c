#include <stdlib.h>
#include <stdio.h>

/**
* display_bytes - show the bytes of this program
* @address: location of the main function
* @num_bytes: quantity of bytes to display
*
* Return: none
*/
void display_bytes(char *address, int num_bytes)
{
    int i;

    for (i = 0; i < num_bytes; i++)
    {
        printf("%.2hhx", address[i]);
        if (i < num_bytes - 1)
            printf(" ");
    }
    printf("\n");
}

/**
* main - prints the bytes of its own main function
* @argc: number of arguments passed to the function
* @argv: array of pointers to arguments
*
* Return: always 0
*/
int main(int argc, char **argv)
{
    int num;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }
    num = atoi(argv[1]);
    if (num < 0)
    {
        printf("Error\n");
        exit(2);
    }
    display_bytes((char *)&main, num);
    return (0);
}
