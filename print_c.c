#include "holberton.h"
#include <stdarg.h>

/**
 * print_c - Print a character.
 * @args: Char to be printed.
 * Return: integer.
 * On error -1.
 **/

int print_c(va_list args)
{
	char c = va_arg(args, char *);

	return (write(1, &c, 1));
}
