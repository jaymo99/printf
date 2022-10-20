#include "main.h"

/**
 * get_specifier - identifies the indicated format and calls the
 * appropriate function.
 *
 * @c: format specifier
 * @list: list of arguments.
 *
 * Return: count of characters printed.
 */
int get_specifier(char c, va_list list)
{
	int i, j = 0;

	Specifier s[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
	{'d', print_d},
	{'i', print_d}
	};

	for (i = 0; i < 5; i++)
		if (c == s[i].symbol)
			j = s[i].f(list);

	return (j);
}
