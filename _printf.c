#include "main.h"
#include <stdarg.h>

/**
 * _printf - This function prints characters and input variables
 * @format: input information into printf, starts and ends with ""
 * Return: the number of characters printed or negative value if error occurs
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0, j; /* Initialize counters and temporary variable j */
	va_list varg;
	fmtType format_array[] = { /*Define structarray handling diff formatspecifs*/
			{"d", i_printf},
			{"i", i_printf},
			{"c", c_printf},
			{"s", s_printf},
			{"\0", NULL} /* NULL terminator for the array */
	};

	va_start(varg, format); /*Initialize the varglist w format as last named arg*/
	if (!format) /* Check if format is NULL, if so return -1 as error code */
		return (-1);
	while (format && format[i]) /*Iterate thru format str til NULL char*/
	{
		if (format[i] == '%') /*If % is encountered format specif is expected*/
		{
			if (!format[i + 1]) /*If format str ends after % return -1 as error*/
				return (-1);
			++i; /* Move to the next character which should be the format specifier */
			for (j = 0; format_array[j].type; ++j) /*Iteratethruarrayfrmtspecif hndlrs*/
			{
				if (format[i] == *(format_array[j].type)) /*If currnt char = type n array*/
				{
					count += format_array[j].f(varg); /*Call hndlr func+return val to count*/
					break; /* Break the loop since we found a match */
				}
			}
			if (!format_array[j].type) /*If no match found in array not format specif*/
				count += e_printf(format[i]);
		}
		else
		{
			_putchar(format[i]); /* If its not a % just print the character as is */
			++count; /* Increment the count of printed characters */
		}
		++i; /* Move to the next character in the format string */
	}
	va_end(varg); /* Clean up variable argument list */
	return (count); /* Return the total count  of printed characters */
}
