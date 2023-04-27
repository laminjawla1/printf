#include "main.h"
/**
*print_str - writes a character to stdout
*@args: argument
*
*Return: Nuber of chars printed
*/
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int i, cnt = 0, check;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		check = _putchar(str[i]);
		if (check > 0)
			cnt++;
	}
	return (cnt);
}
