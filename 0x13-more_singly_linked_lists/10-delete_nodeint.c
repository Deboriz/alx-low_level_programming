#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of a `listint_t` list
 * @head: double header to head of linked list
 * @index: index of node to delete, starting at 0
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curry;
	listint_t *lol;
	unsigned int i;

	i = 0;
	curry = *head;
	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		i++;
		lol = curry;
		if (curry->next)
			curry = curry->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = curry->next;
	else if (curry->next)
		lol->next = curry->next;
	else
		lol->next = NULL;

	free(curry);
	return (1);
}
