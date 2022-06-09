#include "main.h"
/**
 * _isupper - function
 *
 * @c: the character to print
 *
 * Return: int
 */

int _isupper(int c)
{
	if (c == 'A')
	{
		_putchar('A');
		_putchar(':');
		_putchar(' ');
		_putchar('1');
		_putchar('\n');
	} else
	{
		_putchar('a');
		_putchar(':');
		_putchar(' ');
		_putchar('0');
		_putchar('\n');
	}
}
