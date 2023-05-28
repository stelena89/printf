#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define BUFFER 1024

/**
 * struct flags - struct containing flags to enable
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printSelector - to select the appropriate printing function based
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the printing function
 */
typedef struct printSelector
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} printselector;


/* selectPrintingFunction, selects the appropriate printing function
 * depending on the conversion specifier
*/
int (*selectPrintingFunction(char s))(va_list, flags_t *);

/* selectflag, enable flags if _printf finds
* a flag modifier in the format string 
*/
int selectflag(char s, flags_t *f);

/* _printf Function */
int _printf(const char *format, ...);

/* write_functions */
int _putchar(char c);
int _puts(char *str);

/* print_functions */
int print_string(va_list l, flags_t *f); /* %s */
int print_char(va_list l, flags_t *f);   /* %c */
int print_percent(va_list l, flags_t *f);  /* %% */
int print_int(va_list l, flags_t *f); /* %d %i */
void print_number (int n);
int count_digit(int i);
char *convertToString(unsigned long int num, int base, int lowercase);

int print_unsigned(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
int print_hex(va_list l, flags_t *f);
int print_hex_upper(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_capitalS(va_list l, flags_t *f);  
int print_address(va_list l, flags_t *f);
int print_reverse(va_list l, flags_t *f);
int print_rot13(va_list l, flags_t *f); 



#endif /* MAIN_H */
