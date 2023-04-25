#include "main.h"
/**
*print_int - calls the helper function to print an integer
*@args: Argument
*Return: NUmber of digits printed on the console
*/
int print_int(va_list args)
{
	int signed_number, highest_power, count = 0, check;
	unsigned int unsigned_number;

	signed_number = va_arg(args, int);

	if (signed_number < 0)
	{
		check = _putchar('-');
		unsigned_number = -signed_number;
		if (check > 0)
			count += check;
		else
			return (count);
	}
	else
		unsigned_number = signed_number;

	highest_power = 1;
	for (; unsigned_number / highest_power > 9; highest_power *= 10)
		;

	while (highest_power)
	{
		check = _putchar(unsigned_number / highest_power + '0');
		if (check > 0)
			count += check;
		unsigned_number %= highest_power;
		highest_power /= 10;
	}
	return (count);
}
