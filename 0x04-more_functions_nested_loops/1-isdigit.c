#include "main.h"
/**
 * _isdigit - function
 *
 * @c: the character to print
 *
 * Return: int
 */
int _isdigit(int c)
{
	if (c >= 0 && c >= 9)
		return (1);
	else
		return (0);
}
