#include "main.h"
/**
*reference - reference a pointer to a function corresponding
*to the character or format specifier
*
*@c: format specifier
*Return: Pointer to a function
*/
int (*reference(char c))(va_list args)
{
	func_table table[] = {
		{'c', print_char},
		{'s', print_str},
		{'i', print_int},
		{'d', print_int},
		{'b', print_bin},
		/**
		*{'x', print_hex},
		*{'o', print_oct},
		*/
		{'\0', '\0'}
	};
	int i = 0;

	while (table[i].es && table[i].es != c)
		i++;
	return (table[i].f);
}

/**
*_printf - prints a formatted input to stdou
*
*@format: format
*Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int (*f)(va_list);
	int i, total_chars = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			f = reference(format[i + 1]);
			if (f)
			{
				total_chars += f(args);
				i++;
				continue;
			}
			if (!format[i + 1])
				return (-1);
			if (format[i + 1] == '%')
			{
				total_chars += _putchar('%');
				i++;
			}
			else
				total_chars += _putchar(format[i]);
		}
		else
			total_chars += _putchar(format[i]);
	}
	return (total_chars);
}
