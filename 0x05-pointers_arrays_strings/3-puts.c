#include "main.h"
/**
 * _puts - function that prints a string
 *
 * @str: a pointer
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; (str[i] != '\0'); i++)
		_putchar(*str);
}
