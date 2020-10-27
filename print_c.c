#include "holberton.h"
#include <stdarg.h>
/**
 * print_c - Print a character.
 * @args: Char to be printed.
 * Return: On success 1.
 * On error -1.
 **/

int print_c(va_list arg)
{
	char c = (char)va_arg(arg, int);

	return (_putchar(c));
}