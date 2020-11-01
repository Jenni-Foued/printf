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
int print_c(va_list arg);
int print_i(va_list arg);
int _putchar(char c);
int print_rot13(va_list arg);
int print_b(va_list arg);
int print_r(va_list arg);
int print_S(va_list arg);
int print_p(va_list arg);
int print_u(va_list arg);
int print_x(va_list arg);
int print_X(va_list arg);
int print_o(va_list arg);
#endif
