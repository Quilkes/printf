#include "main.h"
#include <stdarg.h>

int _print_char(va_list args)
{
	char c = va_arg (args, int);
	
	return(_putchar(c));
}
