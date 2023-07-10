#include "main.h"

/**
 * _printf - 
 * varg - 
 * Return
 */
int _printf(const char *format, ...);
{
	
	va_list, varg
	fmtType array[] = {
		{'d', i_printf},
		{'i', i_printf},
		{'c', c_printf},
		{'s', s_printf},
		{'\0', NULL}
};


int len = _strlen

	va_start(varg, format);
	if (format == NULL)
		return (-1);
for (int i = 0; i < _strlen(format); i++)
{
	if (format[i] == 'd')
}	int val = va_arg(varg int);
	d_printf(val);

