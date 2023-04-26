#include "main.h"
/**
*print_unsigned_int - prints an unsigned number
*@args: Argument
*Return: number of args printed or -1
*/
int print_unsigned_int(va_list args)
{
	size_t len = 0, highest_power = 1, i, digit, number, tmp, cnt = 0;

	number = va_arg(args, size_t);

	if (number == 0)
		return (_putchar('0'));
	tmp = number;
	while (tmp > 0)
	{
		tmp /= 10;
		len++;
	}
	for (i = 0; i < len - 1; i++)
		highest_power *= 10;
	for (i = 0; i < len; i++)
	{
		digit = number / highest_power;
		cnt += _putchar(digit + '0');
		number -= digit * highest_power;
		highest_power /= 10;
	}
	return (cnt);
}
