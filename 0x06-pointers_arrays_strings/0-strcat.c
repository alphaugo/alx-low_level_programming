#include "main.h"
/**
 * _strcat - function or pointer function
 *
 * @dest: a character pointer
 * @src: a character pointer
 *
 * Return: character
 */



char *_strcat(char *dest, char *src)
{
	char ch;

	while (*dest != '\0')
	{
		ch = *dest;
		_putchar(ch);
		dest++;
	}
	while (*src != '\0')
	{
		ch = *src;
		_putchar(ch);
		src++;
	}
	_putchar('\n');
}
