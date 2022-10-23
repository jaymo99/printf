#include "main.h"
#include <stdlib.h>

/**
 * _printf - resembles the printf function in C
 * @format: formatted string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, printed_char = 0;
	va_list list;

	if (format == NULL)
	{
		exit(0);
	}

	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = get_specifier(format[i], list);
			printed_char += j;
		}
		else
		{
			_putchar(format[i]);
			printed_char++;
		}
		i++;
	}

	va_end(list);
	return (printed_char);
}
