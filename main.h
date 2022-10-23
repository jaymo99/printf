#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct Specifier - indicates format specifier symbols and functions
 * functions.
 *
 * @symbol: character specifying a format
 * @f: function to print data in the specified format.
 */
typedef struct Specifier
{
	char symbol;
	int (*f)(va_list);

} Specifier;

/* main functions */
int _putchar(char c);
int _printf(const char *format, ...);
int get_specifier(char, va_list);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_d(va_list);
int print_i(va_list);
void print_numbers(int num, int *counter);

#endif /* MAIN_H */

