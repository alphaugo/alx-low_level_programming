#include "main.h"
/**
 * void reset_to_98 - function
 *
 * @n: a pointer to an integer
 * Return: int
 */
void reset_to_98(int *n)
{
	int a;
	a = &n;
	
	*n = 98;
}
