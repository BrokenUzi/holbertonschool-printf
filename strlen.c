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
