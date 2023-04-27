#include "main.h"

/**
*_strcpy - copies a string to another
*@dest: destination
*@src: source
*Return: a pointer to the destination
*/
char *_strcpy(char *dest, char *src)
{
	int i, n;

	for (i = 0, n = _strlen(src); i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
*_strlen - finds the length of a string
*@s: string to be counted
*Return: length of a string in int
*/
int _strlen(char *s)
{
	char *p = s;

	while (*p)
		p++;

	return (p - s);
}
/**
*reverse_str - reverses a string
*@s: string to reversed
*Return: Reversed string
*/
char *reverse_str(char *s)
{
	size_t i, len;
	char tmp;

	len = _strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
	return (s);
}
