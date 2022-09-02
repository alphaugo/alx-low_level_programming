#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - function
 * @h: parameter
 *
 * Return: integer
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
