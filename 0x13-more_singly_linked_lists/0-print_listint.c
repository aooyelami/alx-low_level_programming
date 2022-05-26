#include "lists.h"

/**
 * print_listint - function to print all the elements of a listint_t list
 * @h: listint_t
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	for (; h; h = h->next, count++)
	{
		printf("%d\n", h->n);
	}

	return (count);
}
