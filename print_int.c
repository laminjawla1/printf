#include "main.h"
/**
*helper_print_int - prints an integer on the console
*@n: Number
*@i: counter
*Return: number digits printed
*/
int helper_print_int(int n, int i)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i++;
	}
	if (n / 10)
		helper_print_int(n / 10, i);
	_putchar(n % 10 + '0');
	i++;
	return (i);
}
/**
*print_int - calls the helper function to print an integer
*@args: Argument
*Return: NUmber of digits printed on the console
*/
int print_int(va_list args)
{
	return (helper_print_int(va_arg(args, int), 0));
}
