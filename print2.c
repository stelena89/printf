#include "main.h"
/**
 * print_int - prints an integer
 * @list: va_list of arguments from _printf
 * @f: pointer to the struct flags
 * Return: number of char printed
 */
int print_int(va_list list, flags_t *f)
{
    long l;

    if (f->l_mod)
        l = va_arg(list, long);
    else if (f->h_mod)
        l = (short int)va_arg(list, int);
    else
        l = (int)va_arg(list, int);
    return (print_number(convertToString(l, 10, 0, f), f));

}

/**
 * print_number - function  that prints a number with options
 * @str: the base number as a string
 * @flags: the parameter struct
 * Return: chars printed
 */
int print_number(char *str, flags_t *flags)
{
    unsigned int i = _strlen(str);
    int neg = (!flags->unsign && *str == '-');

    if (!flags->precision && *str == '0' && !str[1])
        str = "";
    if (neg)
    {
        str++;
        i--;
    }
    if (flags->precision != UINT_MAX)
        while (i++ < flags->precision)
            *--str = '0';
    if (neg)
        *--str = '-';

    if (!flags->minus)
        return (right_shift(str, flags));
    else
        return (left_shift(str, flags));

}


/**
 * right_shift - prints a number with options
 * @str: the base number as a string
 * @flags: the parameter struct
 * Return: chars printed
 */
int right_shift(char *str, flags_t *flags)
{
    unsigned int n = 0, neg, neg2, i = _strlen(str);
    char pad_char = ' ';

    if (flags->zero && !flags->minus)
        pad_char = '0';
    neg = neg2 = (!flags->unsign && *str == '-');
    if (neg && i < flags->width && pad_char == '0' && !flags->minus)
        str++;
    else
        neg = 0;
    if ((flags->plus && !neg2) ||
        (!flags->plus && flags->space && !neg2))
        i++;
    if (neg && pad_char == '0')
        n += _putchar('-');
    if (flags->plus && !neg2 && pad_char == '0' && !flags->unsign)
        n += _putchar('+');
    else if (!flags->plus && flags->space && !neg2 &&
             !flags->unsign && flags->zero)
        n += _putchar(' ');
    while (i++ < flags->width)
        n += _putchar(pad_char);
    if (neg && pad_char == ' ')
        n += _putchar('-');
    if (flags->plus && !neg2 && pad_char == ' ' && !flags->unsign)
        n += _putchar('+');
    else if (!flags->plus && flags->space && !neg2 &&
             !flags->unsign && !flags->zero)
        n += _putchar(' ');
    n += _puts(str);
    return (n);
}

/**
 * left_shift - function that prints a number with options
 * @str: the base number as a string
 * @flags: the parameter struct
 * Return: chars printed
 */
int left_shift(char *str, flags_t *flags)
{
    unsigned int n = 0, neg, neg2, i = _strlen(str);
    char pad_char = ' ';

    if (flags->zero && !flags->minus)
        pad_char = '0';
    neg = neg2 = (!flags->unsign && *str == '-');
    if (neg && i < flags->width && pad_char == '0' && !flags->minus)
        str++;
    else
        neg = 0;

    if (flags->plus && !neg2 && !flags->unsign)
        n += _putchar('+'), i++;
    else if (flags->space && !neg2 && !flags->unsign)
        n += _putchar(' '), i++;
    n += _puts(str);
    while (i++ < flags->width)
        n += _putchar(pad_char);
    return (n);
}
