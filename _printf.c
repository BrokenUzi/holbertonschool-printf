#include "main.h"
#include <stdarg.h>

/**
 * _printf - 
 * varg - 
 * Return
 */
int _printf(const char *format, ...);
{
	
	va_list, varg
	fmtType array[] = {
		{'d', d_printf},
		{'i', i_printf},
		{'c', c_printf},
		{'s', s_printf},
		{'\0', NULL}
};
int len = _strlen;

	if (format == NULL)
		return (-1);

for (int i = 0; i < _strlen(format); i++)
{
	if (format[i] == 'd')
	_putchar
}
	int val = va_arg(varg int);
	d_printf(val);

