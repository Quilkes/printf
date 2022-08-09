#include "main.h"
#include <stdarg.h>

int _print_int(va_list args)
{
	int n = va_arg(args, int);
	return 0;
}
