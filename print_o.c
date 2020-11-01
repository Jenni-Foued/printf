#include "holberton.h"
#include <stdlib.h>
/**
 * conv_b - Convert an unsigned integer to binary.
 * @nb: Number to convert.
 * Return: Address of array.
 **/
void *conv_b(unsigned int nb)
{
	int i = 0, j = 0;
	char *tab, temp;

	tab = malloc(sizeof(char *));
	while (nb != 0)
	{
		tab[i] = (nb % 2) + '0';
		nb /= 2;
		i++;
	}
	tab[i] = 'S';
	i--;
	for (; j < i; j++, i--)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
	}
	return (tab);
}

/**
 * conv_o - Convert a binary number to octal.
 * @tab: Address of an array.
 * Return: Address of an array.
 **/
void *conv_o(char *tab)
{
	char *tabo, temp;
	int i, mul = 1, octDigit = 0, j = 0;

	tabo = malloc(sizeof(char *));
	for (i = 0; tab[i] != 'S'; i++)
	;
	i--;
	while (i >= 0)
	{
		octDigit += ((tab[i] - '0') * mul);
		if (mul < 3)
			mul *= 2;
		else
		{
			tabo[j] = octDigit + '0';
			octDigit = 0;
			j++;
			mul = 1;
		}
		i--;
	}
	if (mul != 1)
	{
		tabo[j] = octDigit + '0';
		j++;
	}
	tabo[j] = 'S';
	j--;
	for (i = 0; i < j; j--, i++)
	{
		temp = tabo[i];
		tabo[i] = tabo[j];
		tabo[j] = temp;
	}
	return (tabo);
}

/**
 * print_o - Prints the equivalent of a number in octal.
 * @arg: Integer to convert and print.
 * Return: Number of character printed.
 */
int print_o(va_list arg)
{
	int nb = va_arg(arg, int), count = 0, i = 0;
	char *tabb, *tabo;
	unsigned int unb;

	if (nb < 0)
	{
		_putchar('-');
		count++;
		unb = -nb;
	}
	else if (nb == 0)
	{
		_putchar('0');
		return (1);
	}
	else
		unb = nb;
	tabb = conv_b(unb);
	tabo = conv_o(tabb);
	while (tabo[i] != 'S')
	{
		_putchar(tabo[i]);
		i++;
		count++;
	}
	free(tabb);
	free(tabo);
	return (count);
}
