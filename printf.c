#include "main.h"

/**
 * _printf - resembles the printf function in C
 * @format: formatted string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, printed_char = 0;
	va_list list;

	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			get_specifier(format[i], list);
		}
		else
			_putchar(format[i]);
		i++;
	}

	va_end(list);
	return (printed_char);
}
