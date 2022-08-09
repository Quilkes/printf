#include "main.h"
#include <stdarg.h>

int _print_str(va_list args)
{
	int k = 0;
	char *s = va_arg (args, char *)

	while (s[k] != '\0')
	{
	_putchar(s[k]);
	k++;
	}
	return 0;
}
