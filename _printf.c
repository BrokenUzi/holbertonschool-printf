#include "main.h"
#include <stdarg.h>

/**
 * _printf - This function prints characters and input variables
 *
 * Return - the number of characters printed or negative value if error occurs
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0, j; /* Initialize counters and temporary variable j */
	va_list varg;
	fmtType format_array[] = { /* Define the structure array for handling different format specifiers */
			{'d', d_printf},
			{'i', i_printf},
			{'c', c_printf},
			{'s', s_printf},
			{'\0', NULL} /* NULL terminator for the array */
	};

	va_start(varg, format); /* Initialize the variable argument list with format as last named arg */
	if (!format) /* Check if format is NULL, if so return -1 as error code */
		return (-1);
	while (format && format[i]) // Iterate through the format string until NULL character is encountered
{
		if (format[i] == '%') /* If a % is encountered a format specifier is expected */
		{
			if (!format[i + 1]) /* If the format string ends after a % return -1 as error */
				return (-1);
			++i; /* Move to the next character which should be the format specifier */
			for (j = 0; format_array[j].type; ++j) /* Iterate through the array of format specifier handlers */
			{
				if (format[i] == format_array[j].type) /* If the current character matches a type in the array */
				{
					count += format_array[j].f(varg); /* Call the corresponding handler function and add its return value to the count */
					break; /* Break the loop since we found a match */
				}
			}
			if (!format_array[j].type) /* If no match was found in the array its an unsupported format specifier
				count += (format[i]); */
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
