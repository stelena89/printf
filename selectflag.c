#include "main.h"

/**
 * init_flags - clears the struct & reset buffer
 * @flags: the parameters struct
 * @l: the argument pointer
 * Return: void
 */

void init_flags(flags_t *flags, va_list l)
{
    flags->unsign = 0;
    flags->plus = 0;
    flags->space = 0;
    flags->hash = 0;
    flags->zero = 0;
    flags->minus = 0;
    flags->width = 0;
    flags->precision = UINT_MAX;
    flags->h_mod = 0;
    flags->l_mod = 0;
    (void)l;
}

/**
 * select_flag - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int select_flag(char *s, flags_t *f)
{
	int i = 0;

	switch (*s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
        case '-':
            i = f->minus = 1;
            break;
        case '0':
            i = f->zero = 1;
            break;
	}

	return (i);
}
/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 * Return: integer length of string
 */
int _strlen(char *s)
{
    int i = 0;

    while (*s++)
        i++;
    return (i);
}