#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Print a `listint_t` linked list including mem addresses
 * @head: head of linked list
 * Description: Go through the list only once.
 * Return: number of nodes in list. If fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curry;
	size_t cunt;
	const listint_t *lol;

	curry = head;
	if (curry == NULL)
		exit(98);

	cunt = 0;
	while (curry != NULL)
	{
		lol = curry;
		curry = curry->next;
		cunt++;
		printf("[%p] %d\n", (void *)lol, lol->n);

		if (lol < curry)
		{
			printf("-> [%p] %d\n", (void *)curry, curry->n);
			break;
		}
	}

	return (cunt);
