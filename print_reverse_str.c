#include "main.h"
/**
*print_reverse_str - prints a string in reverse
*@args: argument
*
*Return: number of chars printed if success else -1
*/
int print_reverse_str(va_list args)
{
	char *buffer, *str;
	size_t len, i, cnt = 0, check;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	len = _strlen(str);
	buffer = malloc(sizeof(char) * (len + 1));
	_strcpy(buffer, str);
	buffer = reverse_str(buffer);
	for (i = 0; buffer[i]; i++)
	{
		check = _putchar(buffer[i]);
		if (check > 0)
			cnt++;
	}
	free(buffer);
	return (cnt);
}
