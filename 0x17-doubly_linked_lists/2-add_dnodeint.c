#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - fumction pointer
 * @head: parameter
 * @n: value
 *
 * Return: nothing
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	// allpcate node
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	// put in the data
	new_node->n = n;

	// make next of new node ad head
	new_node->next = (*head);

	// move the head to point at the new node
	(*head) = new_node;
}
