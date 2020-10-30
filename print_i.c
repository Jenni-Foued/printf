#include "holberton.h"
/**
 * print_i - prints integer function
 *@arg: integer to print
 * Return: number of integer printed
 */
int print_i(va_list arg)
{
	int ar = va_arg(arg, int);
	unsigned int count = 0, i = 0, ar2 = 0, ar3, j = 1;

	if (ar < 0)
	{
		_putchar('-');
		count++;
		ar3 = -ar;
	}
	else
		ar3 = ar;
	if (ar3 > 9)
	{
	ar2 = ar3;
	for (; ar2; i++)
	{
		ar2 /= 10;
	}
	i--;
	for (j = 1; i; i--)
		j *= 10;
	for (i = 0; ar3; i++)
	{
		_putchar(((ar3 / j) % 10) + '0');
		count++;
		ar3 %= j;
		j /= 10;
	}
	}
	else
	{
		_putchar(ar3 + '0');
		count++;
	}
	return (count);
}
