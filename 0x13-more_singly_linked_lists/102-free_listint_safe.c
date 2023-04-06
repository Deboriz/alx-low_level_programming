#include "lists.h"

/**
 * free_listint_safe - free a `listint_t` list and set the head to null
 * @h: double pointer to head of linked list
 * Description: This function should work for circular lists
 * Only loop through the list once
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curry, *lol;
	size_t cunt;

	cunt = 0;
	curry = *h;
	while (curry != NULL)
	{
		cunt++;
		lol = curry;
		curry = curry->next;
		free(lol);

		if (lol < curry)
			break;
	}
	*h = NULL;

	return (cunt);
}
