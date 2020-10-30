#include "holberton.h"
/**
 * print_u - prints unsigned integer function
 *@arg: integer to print
 * Return: number of integer printed
 */
int print_u(va_list arg)
{
unsigned int ar = va_arg(arg, int);
unsigned int count = 0, i = 0, ar2 = 0, j = 1;
if (ar > 9)
{
ar2 = ar;
for (; ar2; i++)
{
ar2 /= 10;
}
i--;
for (j = 1; i; i--)
j *= 10;
for (i = 0; ar; i++)
{
_putchar(((ar / j) % 10) + '0');
count++;
ar %= j;
j /= 10;
}
}
else
{
_putchar(ar + '0');
count++;
}
return (count);
}
