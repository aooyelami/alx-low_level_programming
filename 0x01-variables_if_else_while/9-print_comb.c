#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always success
 */
int main(void)
{
int numcomb;
for (numcomb = '10'; numcomb <= '99'; numcomb++)
{
putchar(numcomb);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
