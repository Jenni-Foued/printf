#include "holberton.h"
#include <stdarg.h>

/**
 * print_c - Print a character.
 * @arg: Char to be printed.
 * Return: Number of bits printed.
 **/

int print_b(va_list arg)
{
	unsigned int b = va_arg(arg, unsigned int);
	int count = 0, i = 0;
	unsigned int tab[31];

	if (b == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (b)
		{
			tab[i] = (b % 2);
			b /= 2;
			i++;
		}
		i--;
		while (i >= 0)
		{
			_putchar(tab[i] + '0');
			i--;
			count++;
		}
	}
	return (count);
}
