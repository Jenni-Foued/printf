#include "holberton.h"
#include <stdarg.h>
/**
 * print_rot13 - Prints a string in rot13.
 * @arg: String address.
 * Return: integer.
 */
int print_rot13(va_list arg)
{
	int i, j, count = 0;
	char a[] = "AaBbCcDdEeFfGgHhIiJjKkLlMm";
	char b[] = "NnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *s = va_arg(arg, char *);

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				count++;
			}
			else if (s[i] == b[j])
			{
				_putchar(a[j]);
				count++;
			}
		}
	}
	return (count);
	}
