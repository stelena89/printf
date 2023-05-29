#include "main.h"

/**
 * _isdigit - checks if character is digit
 * @c: the character to check
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

/**
 * get_modifier - function that finds the modifier function
 * @s: string for format
 * @flags: parameter structure
 * Return: if modifier was valid
 */

int get_modifier(char *s, flags_t *flags)
{
    int i = 0;

    switch (*s)
    {
        case 'h':
            i = flags->h_mod = 1;
            break;
        case 'l':
            i = flags->l_mod = 1;
            break;
    }
    return (i);
}

/**
 * get_width - function that gets the width from the format string
 * @s: the format string
 * @flags: the parameters struct
 * @l: the argument pointer
 * Return: new pointer
 */

char *get_width(char *s, flags_t *flags, va_list l)
{
    int d = 0;

    if (*s == '*')
    {
        d = va_arg(l, int);
        s++;
    }
    else
    {
        while (_isdigit(*s))
            d = d * 10 + (*s++ - '0');
    }
    flags->width = d;
    return (s);
}
/**
 * get_precision - function that gets the precision from the format string
 * @s: the format string
 * @flags: the parameters struct
 * @ap: the argument pointer
 * Return: new pointer
*/

char *get_precision(char *s, flags_t *flags, va_list ap)
{
    int d = 0;

    if (*s != '.')
        return (s);
    s++;
    if (*s == '*')
    {
        d = va_arg(ap, int);
        s++;
    }
    else
    {
        while (_isdigit(*s))
            d = d * 10 + (*s++ - '0');
    }
    flags->precision = d;
    return (s);
}