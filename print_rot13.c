#include "main.h"

/**
*print_rot13 - rotate every alphabet to 13 places
*@args: String to be encrypted
*Return: Number of chars printed
*/
int print_rot13(va_list args)
{
	char *s;
	char msg[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char codes[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j, cnt = 0;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
		for (j = 0; msg[j]; j++)
			if (s[i] == msg[j])
			{
				cnt += _putchar(codes[j]);
				break;
			}
	_putchar('\n');
	return (cnt);
}

