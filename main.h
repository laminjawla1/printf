#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(int c);

typedef struct
{
	char es;
	int (*f)(va_list);
}func_table;

int _putchar(int c);
int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);
/*int print_hex(va_list args);*/
/*int print_oct(va_list args);*/
int print_percent(va_list args);

#endif
