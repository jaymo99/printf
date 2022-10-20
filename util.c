#include "main.h"

/**
 * get_specifier - identifies the indicated format and calls the
 * appropriate function.
 *
 * @c: format specifier
 * @list: list of arguments.
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

	for(i = 0; i < 5; i++)
		if (c == s[i].symbol)
			j = s[i].f(list);

	return (j);
}
/** print_char - print char
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

/** print_string - print string
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
	
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		j++;
	}

	return (j);
}

/** print_percent - print the character %
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

/**print_d - print %d
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
	
	print_numbers(num,ptr);

	return (counter);
	
}
/**print_numbers - print numbers
 *
 * @num: numbers
 * @counter: counter
 *
 */

void print_numbers(int num, int *counter)
{

        if(num / 10)
        {
                print_numbers(num / 10, counter);
        }
        _putchar((num % 10)+'0');
        *counter += 1;
}
