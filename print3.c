#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @list: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_unsigned(va_list list, flags_t *f)
{
    unsigned long l;

    if (f->l_mod)
        l = (unsigned long)va_arg(list, unsigned long);
    else if (f->h_mod)
        l = (unsigned short int)va_arg(list, unsigned int);
    else
        l = (unsigned int)va_arg(list, unsigned int);
    f->unsign = 1;
    return (print_number(convertToString(l, 10, UNSIGNED, f), f));
}

/**
 * print_hex - prints a number in lowercase hexadecimal base,
 * Description: the function calls convertToString() which converts the input
 * number into the correct base and returns it as a string
 * @list: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: the number of char printed
 */
int print_hex(va_list list, flags_t *f)
{
    unsigned long l;
    int c = 0;
    char *str;

    if (f->l_mod)
        l = (unsigned long)va_arg(list, unsigned long);
    else if (f->h_mod)
        l = (unsigned short int)va_arg(list, unsigned int);
    else
        l = (unsigned int)va_arg(list, unsigned int);

    str = convertToString(l, 16, UNSIGNED | LOWERCASE, f);
    if (f->hash && l)
    {
        *--str = 'x';
        *--str = '0';
    }
    f->unsign = 1;
    return (c += print_number(str, f));
}

/**
 * print_hex_upper - prints a number in uppercase hexadecimal base,
 * Description: the function calls convertToString() which converts the input
 * number into the correct base and returns it as a string
 * @list: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Return: the number of char printed
 */
int print_hex_upper(va_list list, flags_t *f)
{
    unsigned long l;
    int c = 0;
    char *str;

    if (f->l_mod)
        l = (unsigned long)va_arg(list, unsigned long);
    else if (f->h_mod)
        l = (unsigned short int)va_arg(list, unsigned int);
    else
        l = (unsigned int)va_arg(list, unsigned int);

    str = convertToString(l, 16, UNSIGNED, f);
    if (f->hash && l)
    {
        *--str = 'X';
        *--str = '0';
    }
    f->unsign = 1;
    return (c += print_number(str, f));
}
/**
 * print_octal - prints a number in base 8
 * Description: the function calls convertToString() which converts the input
 * number into the correct base and returns it as a string
 * @list: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Return: the number of char printed
 */
int print_octal(va_list list, flags_t *f)
{
    unsigned long l;
    char *str;
    int c = 0;

    if (f->l_mod)
        l = (unsigned long)va_arg(list, unsigned long);
    else if (f->h_mod)
        l = (unsigned short int)va_arg(list, unsigned int);
    else
        l = (unsigned int)va_arg(list, unsigned int);
    str = convertToString(l, 8, UNSIGNED, f);

    if (f->hash && l)
        *--str = '0';
    f->unsign = 1;
    return (c += print_number(str, f));
}
