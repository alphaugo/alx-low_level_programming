#include "lists.h"
/**
 * print_dlistint - fumction
 * @h: argument
 *
 * Return: int
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
