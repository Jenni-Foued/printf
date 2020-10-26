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
	return (write(1, va_arg(args, int), 1));
}
