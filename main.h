#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

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
int print_bin(va_list args);
int print_unsigned_int(va_list args);
int print_octal(va_list args);
int print_hexa_lower(va_list args);
int print_hexa_upper(va_list args);
int print_percent(va_list args);
int print_reverse_str(va_list args);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *reverse_str(char *s);
int print_rot13(va_list args);
#endif
