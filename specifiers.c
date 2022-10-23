#include "main.h"
#include <stddef.h>

/**
 * get_specifier - identifies the indicated format and calls the
 * appropriate function.
 *
 * @c: format specifier
 * @list: list of arguments.
 *
 * Return: count of characters printed.
 */
Specifier get_specifier(char c)
{
	int i;

	Specifier s[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_d},
		{NULL, NULL}
	};

	for (i = 0; i < 5; i++)
		if (c == s[i].symbol[0])
			return (s[i]);

	return (s[5]);
}

/**
 * empty_specifier - checks if the '%' symbol in _printf is left unused.
 *
 * @c: character
 *
 * Description: the '%' symbol in _printf is used together with special characters like c, s, d etc, to perform formatted printing. The symbol should be ignored if nothing is specified after it.
 *
 * Return: 1 if @c is considered 'empty'
 * 0, otherwise.
 */
int empty_specifier(char c)
{
	if (c == ' ' || c == '\0')
		return (1);
	return (0);
}

