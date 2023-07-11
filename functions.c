#include "main.h"

/**
 *
 *
 *
 */

int c_printf(va_list varg)
{
	char c = va_arg(varg, int);

	_putchar(c);
	return(1);

}

int s_printf(va_list varg)
{

	char *str = (va_arg, char *);
	int i = 0, count = 0;

	if (str == NULL)
		str = "(null)";

	for (; str[i]; i++, count++)
		_putchar[i];

	return(count);
}


int i_printf(va_list varg)
{


