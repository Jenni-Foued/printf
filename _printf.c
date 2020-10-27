#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * printer - Uses the coresponding function to print.
 * @formati: Type of element to print.
 * Return: Function address.
 **/
int (*printer(char formati))(va_list)
{
	type_printer frm[] = {
	{'c', print_c},
	{'s', print_s},
	{'\0', NULL}
	};
	int i = 0;

	while (frm[i].c == '\0')
	{
		if (formati == frm[i].c)
			break;
		i++;
	}
	return (frm[i].f);
}
/**
 * _printf - a function that produces output according to a format
 * @format: character string
 * Return: 0 success
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, print_counter = 0;
	int (*f)(va_list);

	if (format == NULL && format[i] == '\0')
		return (-1);
	va_start(arg, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			print_counter++;
		}
		if (format[i] == '\0')
			return (print_counter);
		if (format[i] == '%')
		{
			if (format[i + 1] == '%' || format[i + 1] == '\0')
			{
				_putchar(format[i]);
				i++;
			}
			else
			{
				f = printer(format[i + 1]);
				if (f != NULL)
				{
					print_counter = f(arg);
					i += 2;
				}
				else
				{
					_putchar(format[i]);
					print_counter++;
					i++;
				}
			}
		}
	}
	va_end(arg);
	return (print_counter);