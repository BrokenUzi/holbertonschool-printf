#ifndef _MAIN_H_
#define _MAIN_H_

/**
* struct test - structure called test bc its a test
* 
* 
*/

typedef stuct arg
{
	char *type;
	int(*f)(va_list);
} fmt type;

int _printf(const char *format, ...);
int _putchar(char);
int _strlen(char *s);
int d_print(va_list);
int i_print(va_list);
int c_print(va_list);
int s_print(va_list);

#endif
