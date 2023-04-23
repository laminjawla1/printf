#include "main.h"
/**
*print_str - writes a character to stdout
*@args: argument
*
*Return: 1 if success else -1
*/
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0, cnt = 0, check;

	if (str == NULL)
		str = "(nil)";
	while (str[i])
	{
		check = write(1, &str[i], 1);
		if (check > 0)
			cnt++;
		i++;
	}
	return (cnt);
}
