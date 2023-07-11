#include <stdio.h>
#include "main.h"

/**
* _strlen - returns length of a string
*
* @s: string, number of characters of which we are counting
*
* Return: number of characters
*/

int _strlen(char *s)
{
	int b = 0;

	while (s[b] != '\0')
		b++;

	return (b);
}

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
