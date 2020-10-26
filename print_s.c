#include "holberton.h"
#include <stdarg.h>
/**
 * print_s
 * @arg: string
 * Return: 0 success
 */
int print_s(va_list arg)
{
  char *str = va_arg(s, char *);

  if (str == NULL)
    str = "(nil)";
  return (write(1, &str, strlen(str)));
}
