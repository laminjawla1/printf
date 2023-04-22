#include "main.h"

/**
*print_percent - writes a percentage character to stdout
*@args: argument
*
*Return: 1 if success else -1
*/
int print_percent(va_list args)
{
	char c __attribute__((unused)) = va_arg(args, int);
	return (_putchar('%'));
}
