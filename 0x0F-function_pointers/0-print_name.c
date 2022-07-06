#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that prints char passed
 * @name: character to print
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
