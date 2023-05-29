#include "main.h"
/**
 * print_reverse - prints a string in reverse
 * @l: argument from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_reverse(va_list l, flags_t *f)
{
    int len, sum = 0;
    char *str = va_arg(l, char *);
    (void)f;

    if (str)
    {
        for (len = 0; *str; str++)
            len++;
        str--;
        for (; len > 0; len--, str--)
            sum += _putchar(*str);
    }
    return (sum);
}

/**
 * print_rot13 - prints a string as rot13
 * @l: list of arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_rot13(va_list l, flags_t *f)
{
    int i, index;
    int count = 0;
    char arr[] =
            "NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";
    char *a = va_arg(l, char *);
    (void)f;

    i = 0;
    index = 0;
    while (a[i])
    {
        if ((a[i] >= 'A' && a[i] <= 'Z')
            || (a[i] >= 'a' && a[i] <= 'z'))
        {
            index = a[i] - 65;
            count += _putchar(arr[index]);
        }
        else
            count += _putchar(a[i]);
        i++;
    }
    return (count);
}
