#include "lists.h"
/**
* list_len - function returns the number of elements.
* @h: linked list.
* Return: returns the number of elements in h
*/
size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str != NULL)
			i++;
		h = h->next;
	}
	return (i);
}
