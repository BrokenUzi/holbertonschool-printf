#include "main.h"

/**
 * c_printf - prints a character to the output
 * @varg: arguments used in function
 * Return: returns a count to the main function
 */

int c_printf(va_list varg)
{
	char c = va_arg(varg, int); /*get next arg in varg list as int & assign to c*/

	_putchar(c); /* call func putchar with c to print char to the output*/
	return (1); /* returns 1 indicating one character has been printed */

}

/**
 * s_printf - prints a string to the output
 * @varg: arguments used in function
 * Return: returns a count in function
 */

int s_printf(va_list varg)
{

	char *str = va_arg(varg, char *); /*get next arg in varglist as sting to str*/
	int i = 0, count = 0;

	if (str == NULL) /* if str is NULL */
		str = "(null)"; /* assign null to str */

	for (; str[i]; i++, count++) /*loopthru str,incrementing i,count iteration*/
		_putchar(str[i]); /*call func putchar w each char of str to print str to op*/

	return (count); /*returns count indicating num chars tht have been printed*/
}

/**
 * e_printf - Prints special characters such as '%' and '!'
 * @e: Character after the %
 * Return: Returns number based on input
 */
int e_printf(char e)
{
	if (e == '\0') /*If single %*/
		return (-1);
	else if (e == '%') /*If %%*/
	{
		_putchar('%');
		return (1);
	}
	else
	{
		_putchar('%'); /*If % then print*/
		_putchar(e);
		return (2);
	}
		return (0);
}

/**
 * i_printf - prints a string to the output
 * @varg: arguments used in function
 * Return: Returns a count to the main function
 */
int i_printf(va_list varg)
{
	int num = va_arg(varg, long int); /*get next arg varglist as longint to num*/
	int x = 1, temp, count = 0; /* initialize the variables x, temp, and count */

	if (num < 0) /* if num is negative */
	{
		if (num == INT_MIN) /* if num is equal to the minimum possible intvalue*/
		{
			_putchar('-'); /* print a negative sign */
			_putchar(2 + 48);/* print the character representation of 2 */
			num = num % 2000000000; /* modulo op obtain remandr of num div by 2billion*/
			num *= -1; /* negative num to make positive */
			count += 2; /*increment count by 2 indication 2 chars have printed*/
		}
		else
		{
			_putchar('-'); /* print a neg sign */
			num *= -1; /* neg num to make positive*/
			count++; /* increment count indicating one character has been printed */
		}
	}
	while ((num / x) > 9) /*as long as result of num div by x is greater than 9 */
		x *= 10; /* multiply x by 9 */

	for (; x >= 1; x /= 10) /* loop through until x is less than or equal to 1 */
	{
		temp = (num / x); /* assign the result of num divided by x to temp */
		_putchar(temp + 48); /*call func putchar w temp=48 to print the char*/
		temp *= x; /* multiply temp by x */
		if (temp != 0) /* if tep is not equal to 0*/
		{
			num = num % temp; /* subtract temp from num */
		}
		count += 1; /*increment count indicating one charqcter has been printed */
		if (x == 1) /* if x is equal to 1 */
		return (count); /*returns count indiciating num chars that has printed*/
	}
	return (count); /*return count indicating num of chars that have printed*/
}
