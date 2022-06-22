#include "main.h"
/**
 * _puts_recursion - function
 *
 * @s: a character pointer
 *
 * Retrun: nothing
 */
void _puts_recursion(char *s)
{
	if ((*s) != '0')
		return _puts_recursion(s);
}
