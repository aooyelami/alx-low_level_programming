#include "main.h"

/**
 * print_alphabet - function prints alphabet in lowercase
 * 
 * Return: nothing.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
