#include "main.h"

/**
 * get_specifier - identifies the indicated format and calls the
 * appropriate function.
 *
 * @c: format specifier
 * @list: list of arguments.
 */
void get_specifier(char c, va_list list)
{
    int i = 0;
    
    Specifier s[] = { 
        {'c', print_char},
        {'s', print_char},
        {'%', print_char}
    }; 

	if (c == s[i].symbol)
		s[i].f(list);
}

void print_char(va_list list)
{
	_putchar(va_arg(list, int));
}
