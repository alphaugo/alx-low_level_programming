#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - fuction
 * @array: array
 * @size: the size
 * @action: function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int o = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (; o < size; o++)
		{
			action(array[o]);
		}
	}
}
