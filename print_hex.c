#include "holberton.h"
/**
 * print_x - print in hexadecimal function
 *@arg: integer to convert
 *Return: printed number
 */
int print_x(va_list arg)
{
int n = va_arg(arg, int);
unsigned int nb;
int tab[10];
int i, j, count = 0;
 char a[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
'9', 'a', 'b', 'c', 'd', 'e', 'f'};
int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
if (n < 0)
{
_putchar('-');
count++;
nb = -n;
}
else
nb = n;
if (nb == 0)
{
_putchar('0');
count++;
return (count);
}
for (i = 0; nb != 0; i++)
{
tab[i] = nb % 16;
nb = nb / 16;
}
for (; i >= 0; i--)
{
for (j = 0; j < 17; j++)
{
if (tab[i] == b[j])
{
_putchar(a[j]);
count++;
break;
}
}
}
return (count);
}








#include "holberton.h"
/**
 * print_X - print in hexadecimal function
 *@arg: integer to convert
 *Return: printed number
 */
int print_X(va_list arg)
{
int n = va_arg(arg, int);
unsigned int nb;
int tab[10];
int i, j, count = 0;
char a[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
'9', 'A', 'B', 'C', 'D', 'E', 'F'};
int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
if (n < 0)
{
_putchar('-');
count++;
nb = -n;
}
else
nb = n;
if (nb == 0)
{
_putchar('0');
count++;
return (count);
}
for (i = 0; nb != 0; i++)
{
tab[i] = nb % 16;
nb = nb / 16;
}
for (; i >= 0; i--)
{
for (j = 0; j < 17; j++)
{
if (tab[i] == b[j])
{
_putchar(a[j]);
count++;
break;
}
}
}
return (count);
}
