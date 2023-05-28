#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @l: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_unsigned(va_list l, flags_t *f)
{
	unsigned int u = va_arg(l, unsigned int);
	char *str = convertToString(u, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_hex - prints a number in lowercase hexadecimal base,
 * Description: the function calls convertToString() which converts the input
 * number into the correct base and returns it as a string
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: the number of char printed
 */
int print_hex(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convertToString(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 * print_hex_upper - prints a number in uppercase hexadecimal base,
 * Description: the function calls convertToString() which converts the input
 * number into the correct base and returns it as a string
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Return: the number of char printed
 */
int print_hex_upper(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convertToString(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}
/**
 * print_octal - prints a number in base 8
 * Description: the function calls convertToString() which converts the input
 * number into the correct base and returns it as a string
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Return: the number of char printed
 */
int print_octal(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convertToString(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
