#include "holberton.h"
#include <stdarg.h>
/**
 * print_i - prints integer function
 *@arg: integer to print
 * Return: number of integer printed
 */
int print_i(va_list arg)
{
  int ar = va_arg(arg, int);
  int count = 0;
if (ar < 0)
{
_putchar('-');
count++;
ar = ar * (-1);
}
if (ar / 10)
{
print_i(ar / 10);
count++;
}
_putchar((ar % 10) + '0');
return(count);
}
