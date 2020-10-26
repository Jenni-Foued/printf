#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - a function that produces output according to a format
 * @format: character string
 * Return: 0 success
 */
int _printf(const char *format, ...)
{
type_printer frm[] = {
{'c', print_c},
{'s', print_s}
};
va_list arg;
int i = 0;
if (!format || ((format[i]) == '%' && format[i + 1] == '\0'))
return (-1);
va_start(arg, format);
while (format && format[i])
{
if (frm[i].c == format[i])
frm[i].f(arg);
break;
i++;
}
return (0);
}
