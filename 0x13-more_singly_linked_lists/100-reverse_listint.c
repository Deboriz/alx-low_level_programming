#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - Reverse a `listint_t` linked list
 * @head: double pointer to head
 * Description: Limited to going through loop only once.
 * Not allowed to use `malloc` or `free` or arrays
 * Can only declare a max of 2 variables.
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *hole;
	listint_t *curry;

	if (*head == NULL)
		return (NULL);

	curry = *head;
	*head = curry->next;
	hole = (*head)->next;
	curry->next = NULL;
	if (*head == NULL)
	{
		*head = curry;
		return (curry);
	}

	while (hole != NULL)
	{
		(*head)->next = curry;
		current = *head;
		*head = hole;
		hole = (*head)->next;
	}

	(*head)->next = curry;
	return (*head);
}
