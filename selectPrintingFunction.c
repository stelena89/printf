#include "main.h"
/**
 * selectPrintingFunction - function that selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */
int (*selectPrintingFunction(char s))(va_list, flags_t *)
{
	printselector func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'%', print_percent},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_upper},
		{'b', print_binary},
		{'o', print_octal},
		{'S', print_capitalS},
		{'p', print_address},
		{'R', print_rot13},
		{'r', print_reverse}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
