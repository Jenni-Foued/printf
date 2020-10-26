#ifndef PRINTF_H
#define PRINTF_H
int _printf(const char *format, ...);
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
int print_c(va_list args);
#endif
