#include "lists.h"

/**
 * create - function to create a doubly linked list.
 *
 * Return: Always a new node.
 */

void create(void)
{
	struct dlistint_s *head;
	struct dlistint_s *temp;
	size_t *new;

	temp = malloc(sizeof(struct dlistint_s));

	if (temp == NULL)
		return (NULL);
	temp->n = new;
	head->prev = temp;
	temp->next = head;
	temp->prev = NULL;
	head = temp;

	return (temp);
	free(temp)
}
