#include "main.h"
/**
 * convertToString - converts number and base into string
 * @num: input number
 * @base: input base
 * @flags: flags
 * @params: flags struct
 * Return: result string
 */
char *convertToString(long int num, int base, int flags, flags_t *flg)
{
    static char *array;
    static char buffer[50];
    char sign = 0;
    char *ptr;
    unsigned long n = num;
    (void)flg;

    if (!(flags & UNSIGNED) && num < 0)
    {
        n = -num;
        sign = '-';
    }
    array = flags & LOWERCASE ? "0123456789abcdef" : "0123456789ABCDEF";
    ptr = &buffer[49];
    *ptr = '\0';

    do	{
        *--ptr = array[n % base];
        n /= base;
    } while (n != 0);

    if (sign)
        *--ptr = sign;
    return (ptr);
}
/**
 * print_range - function that prints a range of char addresses
 * @from: starting address
 * @to: stopping address
 * @except: except address
 * Return: number bytes printed
 */
int print_range(char *from, char *to, char *except)
{
    int sum = 0;

    while (from <= to)
    {
        if (from != except)
            sum += _putchar(*from);
        from++;
    }
    return (sum);
}