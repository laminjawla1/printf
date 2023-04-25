#include "main.h"

/**
*print_bin - prints a number in binary
*@args: va_list arguments
*Return: Total digits printed
*/
int print_bin(va_list args)
{
	size_t len = 0, highest_power = 1, digit, number, tmp, cnt = 0, i;

	number = va_arg(args, size_t);

	if (number == 0)
		return (_putchar('0'));
	tmp = number;
	while (tmp)
	{
		tmp /= 2;
		len++;
	}
	for (i = 0; i < len - 1; i++)
		highest_power *= 2;
	for (i = 0; i < len; i++)
	{
		digit = number / highest_power; 
		cnt +=_putchar(digit + '0'); 
		number -= digit * highest_power;
		highest_power /= 2;
	}
	return (cnt);
}
