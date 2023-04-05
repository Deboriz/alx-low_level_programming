#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head
 * @index: insert node at this index, starting count at 0
 * @n: value to store in node
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *nude;
	listint_t *curry;
	unsigned int cunt;

	if (head == NULL)
		return (NULL);

	curry = *head;
	for (cunt = 1; curry && cunt < index; cunt++)
	{
		curry = curry->next;
		if (curry == NULL)
			return (NULL);
	}

	nude = malloc(sizeof(listint_t));
	if (nude == NULL)
	{
		free(nude);
		return (NULL);
	}
	nude->n = n;

	if (index == 0)
	{
		*head = nude;
		nude->next = curry;
	}
	else if (curry->next)
	{
		nude->next = curry->next;
		curry->next = nude;
	}
	else
	{
		nude->next = NULL;
		curry->next = nude;
	}

	return (nude);
}
