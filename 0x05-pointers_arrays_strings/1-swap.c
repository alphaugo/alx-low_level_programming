#include "main.h"
/**
 * swap_int - function that swaps integer values
 *
 * @a: a pointer to an interger
 * @b: a pointer to an integer
 *
 * Return: int
 */
void swap_int(int *a, int *b)
{
	int o;
	int *f;

	f = &o;

	*b = *f;

	*a = *b;

	*f = *a;
}

