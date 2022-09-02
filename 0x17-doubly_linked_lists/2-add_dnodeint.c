#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - fumction pointer
 * @head: parameter
 * @n: value
 *
 * Return: address of the new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	// allpcate node
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	// put in the data
	new_node->n = n;
	if (*head)
	{	
		// make next of new node ad head
		new_node->next = (*head);
		new_node->prev = (*head)->prev;
		(*head)->prev = new_node;

		// move the head to point at the new node
		(*head) = new_node;
		return (*head);
	}

	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
