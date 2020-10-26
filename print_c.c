#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * print_c - Print a character.
 * @args: Char to be printed.
 * Return: On success 1.
 * On error -1.
 **/

int print_c(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
