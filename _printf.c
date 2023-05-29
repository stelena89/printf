#include "main.h"

/**
 * _printf - Displays output according to a format
 * Description: the function will call the selectPrintingFunction() to
 * determine which printing function to call depending on the conversion
 * specifiers contained into format
 * @format: format string containing the characters and the specifiers
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)

{
    int sum = 0;
    va_list list;
    char *p, *start;

    flags_t params = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    va_start(list, format);

    if (!format || (format[0] == '%' && !format[1]))/* checking for NULL char */
        return (-1);
    if (format[0] == '%' && format[1] == ' ' && !format[2])
        return (-1);
    for (p = (char *)format; *p; p++)
    {
        init_flags(&params, list);
        if (*p != '%')/*checking for the % specifier*/
        {
            sum += _putchar(*p);
            continue;
        }
        start = p;
        p++;
        while (select_flag(p, &params)) /* while char at p is flag character */
        {
            p++; /* next character */
        }
        p = get_width(p, &params, list);
        p = get_precision(p, &params, list);
        if (get_modifier(p, &params))
            p++;
        if (!selectPrintingFunction(p))
            sum += print_range(start, p,
                                 params.l_mod || params.h_mod ? p - 1 : 0);
        else
            sum += get_func(p, list, &params);
    }
    _putchar(-1);
    va_end(list);
    return (sum);
}