#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node to the end of list
 * @head: A pointer to list structure
 * @n: An integer data to put into the new node
 * Return: The address of the new element, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *newton;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (*head == NULL)
	{
		newnode->next = *head;
		*head = new_node;
	}
	else
	{
		newnode->next = NULL;
		newton = *head;
		while (newton->next)
			newton = newton->next;
		newton->next = newnode;
	}
	return (newnode);
}
