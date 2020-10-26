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
type_printer frm[] ={
{"c", print_c}
{"s", print_s}
};
