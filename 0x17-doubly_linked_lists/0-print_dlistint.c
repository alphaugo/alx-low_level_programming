#include "list.h"
/**
 * print_dlistint - fumction
 * @h: argument
 *
 * Return: int
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		n++;
	}
	return  (n);
}
