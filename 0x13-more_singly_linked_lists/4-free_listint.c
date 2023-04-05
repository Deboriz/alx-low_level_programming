#include "lists.h"

/**
 * free_listint - free a `listint_t` list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *flesh;

	while (head != NULL)
	{
		flesh = head;
		head = head->next;
		free(flesh);
	}
}
