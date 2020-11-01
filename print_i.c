#include "holberton.h"
/**
 * print_i - prints integer function
 * @arg: integer to print
 * Return: number of integer printed
 */
int print_i(va_list arg)
{
	int nb = va_arg(arg, int);
	unsigned int count = 0, unb;
	int i = 0;
	char tab[10];

	if (nb < 0)
	{
		_putchar('-');
		count++;
		unb = -nb;
	}
	else
		unb = nb;
	if (unb > 0)
	{
		while (unb != 0)
		{
			tab[i] = (unb % 10) + '0';
			unb /= 10;
			i++;
		}
		i--;
		while (i >= 0)
		{
			_putchar(tab[i]);
			i--;
			count++;
		}
	}
	else
	{
		_putchar('0');
		count++;
	}

	return (count);
}
