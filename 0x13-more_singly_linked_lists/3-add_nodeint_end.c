#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a `listint_t` list
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: Address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curry;
	listint_t *newness;

	curry = *head;
	while (curry && curry->next != NULL)
		curry = curry->next;

	newness = malloc(sizeof(listint_t));
	if (newness == NULL)
		return (NULL);
	newness->n = n;
	newness->next = NULL;

	if (curry)
		curry->next = newness;
	else
		*head = newness;
	return (newness);
}
