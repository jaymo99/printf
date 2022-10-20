#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

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

#endif /* MAIN_H */

