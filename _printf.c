#include "main.h"
#include <stdarg.h>
#include <stddef.h>

int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0, k = 0, show = 0, num = 0;
	char *str = NULL;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			show++;
		}
		else
		{
			_select_func(format[i+1])(args);
			i++;
			show++;
		}
		i++;
	}
	va_end(args);
	return (show);
}
