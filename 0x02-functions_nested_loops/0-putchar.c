#include "main.h"

/**
 * main - entry point
 * @void: no argument
 * Return: 0
 */
int main(void)
{
	char task0[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(task0[c]);
	}
	_putchar('\n');
	return (0);
}
