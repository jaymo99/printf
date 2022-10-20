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
    int i;
    
    Specifier s[] = { 
        {'c', print_char},
        {'s', print_string},
        {'%', print_char}
    };

	for(i = 0; i < 3; i++)
		if (c == s[i].symbol)
			s[i].f(list);
}
/** print_char - print char
 *
 * @list: list of arguments
 */
void print_char(va_list list)
{
	_putchar(va_arg(list, int));
}

/** print_string - print string
 *
 * @list: list of arguments
 */
void print_string(va_list list)
{
	int i = 0;
	char *str;
	
	str = va_arg(list, char*);
	
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

}
