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
	{'i', print_i},
	{'d', print_i},
	{'R', print_rot13},
	{'\0', NULL}
	};
	int i = 0;

	for (i = 0; frm[i].c; i++)
	{
		if (formati == frm[i].c)
		  return(frm[i].f);
	}
	return (NULL);
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

if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(arg, format);
for (; format && format[i]; i++)
{
if (format[i] == '%')
{
       if (format[i + 1] == '%' || format[i + 1] == '\0')
       {
         _putchar(format[i]);
         i++;
         print_counter++;
       }
       else
       {
         f = printer(format[i + 1]);
         if (f != NULL)
         {
           print_counter = f(arg);
           i ++;
         }
       }
       if (f == NULL)
       {
         _putchar(format[i]);
         print_counter++;
       }
}
else
{
       _putchar(format[i]);
       print_counter++;
}
}
va_end(arg);
return (print_counter);
}
