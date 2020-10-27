#include "holberton.h"
#include <stdlib.h>
/**
 * print_c - Print a character.
 * @arg: Char to be printed.
 * Return: On success 1.
 * On error -1.
 **/

int print_c(va_list arg)
{
	char c = va_arg(arg, int);

	return (_putchar(c));
}
