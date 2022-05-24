#include "lists.h"

/**
 * print_list - prototype to count node of linked list
 * @h: list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int strt = 0;

	for (; h; strt++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (strt);
}
