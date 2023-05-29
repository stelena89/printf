#include "main.h"


/**
 * _putchar - writes the character c to stdout
 * Description: _putchar uses a local buffer of 1024
 * to call write as little as possible
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    static int i;
    static char buf[BUFFER];

    if (c == -1 || i >= BUFFER)
    {
        write(1, buf, i);
        i = 0;
    }
    if (c != -1)
        buf[i++] = c;
    return (1);
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
    char *a = str;

    while (*str)
        _putchar(*str++);
    return (str - a);
}

