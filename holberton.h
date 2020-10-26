#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
/**
 * struct form - Types.
 * @c: Types in c.
 * @f: Corresponding function.
 **/
typedef struct form
{
char c;
int (*f)(va_list);
} type_printer;
int _printf(const char *format, ...);
int print_s(va_list arg);
int print_c(va_list args);
int _putchar(char c);
#endif
