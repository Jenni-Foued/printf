#include "holberton.h"
#include <stdlib.h>
/**
 * print_r - Print a string in reverse.
 * @arg: String address.
 * Return: integer.
 */
int print_r(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i = 0;

	if (str == NULL)
		str = "(nil)";
	while (str[i])
		i++;
	i--;
	for (; str[i]; i--)
		_putchar(str[i]);
	return (i);
}
