#include "main.h"
#include <stdarg.h>

/**
 * _printf - This function prints characters and input variables 
 * 
 * Return - the number of characters printed, or a negative value if any error occurs
 */
<<<<<<< HEAD

int _printf(const char *format, ...)
{
	int i = 0, count = 0, j;
	va_list varg;
	fmtType format_array[] = {
			{'d', d_printf},
			{'i', i_printf},
			{'c', c_printf},
			{'s', s_printf},
			{'\0', NULL}
	};

	va_start(varg, format);
	if (!format)
		return (-1);
	while (format && format[i]) 
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				return (-1);
			++i; 
			for (j = 0; format_array[j].type; ++j)
			{
				if (format[i] == format_array[j].type)
				{
					count += format_array[j].f(varg);
					break;
				}
			}
			if (!format_array[j].type)
				count += print_edge(format[i]);
		}
		else
		{
			_putchar(format[i]); 
			++count; 
		}
		++i;
	}
	va_end(varg);
	return count;
=======
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

>>>>>>> 5399d9e6cc8168b41ac062a1eb26498aa7c0d033
