#include "main.h"
/**
*print_hexa - prints a hexadecimal number
*@number: Number to printed
*@_case: The in which the number should be printed in
*Return: number of args printed or -1
*/
int print_hexa(size_t number, bool _case)
{
	size_t len = 0, highest_power = 1, i, digit, tmp, cnt = 0;
	char __case__;

	if (number == 0)
		return (_putchar('0'));
	tmp = number;
	while (tmp > 0)
	{
		tmp /= 16;
		len++;
	}
	for (i = 0; i < len - 1; i++)
		highest_power *= 16;
	if (_case)
		__case__ = 'A' - ':';
	else
		__case__ = 'a' - ':';
	for (i = 0; i < len; i++)
	{
		digit = number / highest_power;
		if (digit < 10)
			cnt += _putchar(digit + '0');
		else
			cnt += _putchar(digit + '0' + __case__);
		number -= digit * highest_power;
		highest_power /= 16;
	}
	return (cnt);
}
/**
*print_hexa_lower - calls the print_hexa to print in lowercase
*@args: Argument
*Return: Number chars printed or -1
*/
int print_hexa_lower(va_list args)
{
	return (print_hexa(va_arg(args, size_t), false));
}
/**
*print_hexa_upper - calls the print_hexa to print in uppercase
*@args: Argument
*Return: Number of chars printed or -1
*/
int print_hexa_upper(va_list args)
{
	return (print_hexa(va_arg(args, size_t), true));
}
