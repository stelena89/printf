#include "main.h"
/**
 * print_string - loops through a string and prints
 * every character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_string(va_list l, flags_t *f)
{
    char *str = va_arg(l, char *), pad_char = ' ';
    unsigned int pad = 0, sum = 0, i = 0, j;

    (void)f;
    switch ((int)(!str))
        case 1:
            str = NULL_STR;

    j = pad = _strlen(str);
    if (f->precision < pad)
        j = pad = f->precision;

    if (f->minus)
    {
        if (f->precision != UINT_MAX)
            for (i = 0; i < pad; i++)
                sum += _putchar(*str++);
        else
            sum += _puts(str);
    }
    while (j++ < f->width)
        sum += _putchar(pad_char);
    if (!f->minus)
    {
        if (f->precision != UINT_MAX)
            for (i = 0; i < pad; i++)
                sum += _putchar(*str++);
        else
            sum += _puts(str);
    }
    return (sum);
}
/**
 * print_char - prints a character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_char(va_list l, flags_t *f)
{
    char pad_char = ' ';
    unsigned int pad = 1, sum = 0, ch = va_arg(l, int);

    if (f->minus)
        sum += _putchar(ch);
    while (pad++ < f->width)
        sum += _putchar(pad_char);
    if (!f->minus)
        sum += _putchar(ch);
    return (sum);
}
/**
 * print_percent - prints a percent
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags in which we turn the flags on
 * Return: number of char printed
 */
int print_percent(va_list l, flags_t *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}
/**
 * print_binary - prints a number in base 2
 * Description: the function calls convertToString()
 * which in turns converts the input
 * number into the correct base and returns it as a string
 * @list: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Return: the number of char printed
 */
int print_binary(va_list list, flags_t *f)
{
    unsigned int n = va_arg(list, unsigned int);
    char *str = convertToString(n, 2, UNSIGNED, f);
    int c = 0;

    if (f->hash && n)
        *--str = '0';
    f->unsign = 1;
    return (c += print_number(str, f));
}


