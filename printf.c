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
	Specifier s;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			if (empty_specifier(format[i]))
				continue;
			
			s = get_specifier(format[i]);

			/* True when symbol after '%' is not valid */
			if (s.f == NULL)
			{
				i--;
				_putchar(format[i]);
				printed_char++;
				j = 0;
			}
			else
			{
				j = s.f(list);
			}

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
