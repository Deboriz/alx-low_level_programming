
#include "lists.h"

/**
 * sum_listint - get the sum of all the int `n` of a `listint_t` linked list
 * @head: pointer to head
 * Return: sum of all int `n`
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *curry;

	for (sum = 0, curry = head; curry != NULL; curry = curry->next)
		sum += curry->n;

	return (sum);
}
