#include "main.h"

/**
 * print_capitalS - Non printable characters (0 < ASCII value < 32 or >= 127)
 * are printed this way: \x, followed by the ASCII code value
 * in hexadecimal (upper case - always 2 characters)
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_capitalS(va_list l, flags_t *f)
{
    char *str = va_arg(l, char *);
    char *hex;
    int sum = 0;

    if ((int)(!str))
        return (_puts(NULL_STR));
    for (; *str; str++)
    {
        if ((*str > 0 && *str < 32) || *str >= 127)
        {
            sum += _putchar('\\');
            sum += _putchar('x');
            hex = convertToString(*str, 16, 0, f);
            if (!hex[1])
                sum += _putchar('0');
            sum += _puts(hex);
        }
        else
        {
            sum += _putchar(*str);
        }
    }
    return (sum);
}

/**
 * print_address - prints address
 * @list: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_address(va_list list, flags_t *f)
{
    unsigned long int n = va_arg(list, unsigned long int);
    char *str;

    if (!n)
        return (_puts("(nil)"));

    str = convertToString(n, 16, UNSIGNED | LOWERCASE, f);
    *--str = 'x';
    *--str = '0';
    return (print_number(str, f));
}

