#include "main.h"

/**
 * c_printf - prints a character to the output
 * @varg: arguments used in function
 * Return: returns a count to the main function
 */

int c_printf(va_list varg)
{
	char c = va_arg(varg, int);

	_putchar(c);
	return(1);

}

/**
 * s_printf - prints a string to the output
 * @varg: arguments used in function
 * Return: returns a count in function
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

/**
 * i_printf - prints a string to the output
 * @varg - arguments used in function
 * Return: Returns a count to the main function
 */
int i_printf(va_list varg)
{
	int num = va_arg(varg, long int);
	int x = 1, temp, count = 0;

	if (num < 0)
	{
		if (num == INT_MIN)
		{
			_putchar('-');
			_putchar(2 + 48);
			num = num % 2000000000;
			num *= -1;
			count += 2;
		}
		else
		{
			_putchar('-');
			num *= -1;
			count++;
		}
	}
	while ((num /x) > 9)
		x *= 10;

	for (; x >= 1; x/= 10)
	{
		temp = (num / x);
		_puthcar(temp = 48);
		temp *= x;
		if (temp != 0)
		{
			num = num 5 temp;
		}
		count =+ 1;
		if (x == 1)
		return (count);
	}
	return (count);
}
