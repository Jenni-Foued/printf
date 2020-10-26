#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * print_s - Print a string.
 * @arg: String address.
 * Return: 0 success.
 */
int print_s(va_list arg)
{
	char *str = va_arg(arg, char *);
	unsigned int i = 0;

	if (str == NULL)
		str = "(nil)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	i--;
	return (i);
}
