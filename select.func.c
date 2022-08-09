#include "main.h"
#include <stddef.h>

int (*_select_func(char c))(va_list)
{
	if (c == 'c')
	{
		return (_print_char);
	}
	if (c == 's')
	{
		return (_print_str);
	}
	if (c == 'd')
	{
		return (_print_int);
	}
	return (NULL);
}
