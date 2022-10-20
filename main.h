#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct Specifier
{
	char symbol;
	void (*f)(va_list);
	
} Specifier;

/* main functions */
int _putchar(char c);
int _printf(const char *format, ...);
void get_specifier(char, va_list);
void print_char(va_list);
void print_string(va_list);
void print_percent(va_list);

#endif /* MAIN_H */

