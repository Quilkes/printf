#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

int _putchar(char c);
int _printf(const char * const format, ...);
int _print_char(va_list args);
int _print_int(va_list args);
int _print_str(va_list args);
int (*_select_func(char c))(va_list);
#endif
