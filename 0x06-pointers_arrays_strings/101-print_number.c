#include "main.h"
/**
 * print_number - print any int
 * @n: int
 * Return: void
 */
void print_number(int n)
{
	unsigned int aux;

	aux = n;
	if (n < 0)
	{
		_putchar('-');
		aux *= -1;
	}
	if (aux / 10 > 0)
	{
		print_number(aux / 10);
	}
	_putchar((aux % 10) + '0');
}
