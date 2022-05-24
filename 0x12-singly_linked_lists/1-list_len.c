#include "lists.h"

/**
 * list_len - returns num of element
 * @h: linked list
 * Return: num of elemets
 */
size_t list_len(const list_t *h)
{
	int strt = 0;

	for (; h; strt++)
		h = h->next;

	return (strt);
}
