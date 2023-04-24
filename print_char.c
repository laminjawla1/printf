#include "main.h"

/**
*print_char - writes a character to stdout
*@args: argument
*
*Return: 1 if success else -1
*/
int print_char(va_list args)
{
	unsigned char character = va_arg(args, int);

	return (_putchar(character));
}
