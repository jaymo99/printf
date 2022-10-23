#include "main.h"
#include <stddef.h>

/**
 * print_char - print char
 *
 * @list: list of arguments
 *
 * Return: the number of characters printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));

	return (1);
}

/**
 * print_string - print string
 *
 * @list: list of arguments
 *
 * Return: the number of characters printed
 */
int print_string(va_list list)
{
	int i = 0, j = 0;
	char *str;

	str = va_arg(list, char*);

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		j++;
	}

	return (j);
}

/**
 * print_percent - print the character %
 *
 * @list: list of arguments
 *
 * Return: the number of characters printed
 */
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');

	return (1);
}

/**
 * print_d - print %d
 *
 * @list: list of arguments
 *
 * Return: the number of characters printed
 */
int print_d(va_list list)
{
	int counter = 0;
	int *ptr = &counter;

	int num = va_arg(list, int);

	print_numbers(num, ptr);

	return (counter);

}
/**
 * print_numbers - print numbers
 *
 * @num: numbers
 * @counter: counter
 *
 */

void print_numbers(int num, int *counter)
{
	/* negative numbers */
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}

	if (num / 10)
	{
		print_numbers(num / 10, counter);
	}
	_putchar((num % 10) + '0');
	*counter += 1;
}
