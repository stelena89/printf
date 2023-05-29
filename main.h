#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define BUFFER 1024
#define LOWERCASE	1
#define UNSIGNED	2
#define NULL_STR "(null)"

/**
 * struct flags - struct containing flags to enable
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 * @zero: flag for the '0' character
 * @minus: flag for the '-' character
 * @width:  width
 * @precision:  precision
 * @h_mod: h modifier
 * @l_mod: l modifier
 */
typedef struct flags
{
    unsigned int unsign     : 1;
    unsigned int plus       : 1;
    unsigned int space      : 1;
    unsigned int hash       : 1;
    unsigned int zero       : 1;
    unsigned int minus      : 1;
    unsigned int width      : 1;
    unsigned int precision  : 1;
    unsigned int h_mod      : 1;
    unsigned int l_mod      : 1;
} flags_t;

/**
 * struct printSelector - to select the appropriate printing function based
 * on the format specifier passed to _printf()
 * @spec: format specifier
 * @f: pointer to the printing function
 */
typedef struct printSelector
{
	char *spec;
	int (*f)(va_list ap, flags_t *);
} printselector;


int (*selectPrintingFunction(char *s))(va_list, flags_t *);

int select_flag(char *s, flags_t *f);


int _printf(const char *format, ...);


int _putchar(char c);
int _puts(char *str);

int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);
int print_int(va_list l, flags_t *f);
int print_number(char *str, flags_t *flags);
int right_shift(char *str, flags_t *flags);
int left_shift(char *str, flags_t *flags);
char *convertToString(long int num, int base, int flags, flags_t *params);

int print_unsigned(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
int print_hex(va_list l, flags_t *f);
int print_hex_upper(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_capitalS(va_list l, flags_t *f);  
int print_address(va_list l, flags_t *f);
int print_reverse(va_list l, flags_t *f);
int print_rot13(va_list l, flags_t *f);

int _isdigit(int c);
void init_flags(flags_t *flags, va_list l);
int get_func(char *s, va_list l, flags_t *flags);
int get_modifier(char *s, flags_t *flags);
char *get_width(char *s, flags_t *flags, va_list l);
char *get_precision(char *s, flags_t *flags, va_list l);
int print_range(char *from, char *to, char *except);
int _strlen(char *s);

#endif /* MAIN_H */
