#include "main.h"
#include <stdarg.h>

/**
 * _printf - This function prints characters and input variables
 *
 * Return - the number of characters printed or negative value if error occurs
 */

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
				count += (format[i]);
		}
		else
		{
			_putchar(format[i]);
			++count;
	}
		++i;
	}
	va_end(varg);
	return (count);
