#include "main.h"
/**
 * selectPrintingFunction - function that selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * list: argument pointer
 * @flags: the parameters struct
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */
int (*selectPrintingFunction(char *s))(va_list list, flags_t *flags)
{
	printselector func_arr[] = {
		{"i", print_int},
		{"s", print_string},
		{"c", print_char},
		{"%", print_percent},
		{"d", print_int},
		{"u", print_unsigned},
		{"x", print_hex},
		{"X", print_hex_upper},
		{"b", print_binary},
		{"o", print_octal},
		{"S", print_capitalS},
		{"p", print_address},
		{"R", print_rot13},
		{"r", print_reverse},
        {NULL, NULL}
		};
    int i = 0;

    while (func_arr[i].spec)
    {
        if (*s == func_arr[i].spec[0])
        {
            return (func_arr[i].f);
        }
        i++;
    }
    return (NULL);

}
/**
 * get_func - finds the appropriate format function
 * @s: string of the format
 * @l: argument pointer
 * @flags: the parameters struct
 * Return: the number of bytes printed
 */

int get_func(char *s, va_list l, flags_t *flags)
{
    int (*f)(va_list, flags_t *) = selectPrintingFunction(s);

    if (f)
        return (f(l, flags));
    return (0);
}