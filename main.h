#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


typedef stuct arg
{
	char *type;
	int(*f)(va_list);
} fmt type;

int _printf(const char *format, ...);
int _putchar(char);
int _strlen(char *s);
int i_print(va_list);
int c_print(va_list);
int s_print(va_list);

#endif
