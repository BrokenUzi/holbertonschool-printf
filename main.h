#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>

typedef struct arg
{
	char *type;
	int (*f)(va_list);
} fmtType;

int _printf(const char *format, ...);
int _putchar(char);
int _strlen(char *s);
int i_printf(va_list);
int c_printf(va_list);
int s_printf(va_list);
int e_printf(char e);

#endif
