#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always success
 */
int main(void)
{
char num_comb;
for (num_comb = 10; num_comb <= 99; num_comb++)
{
putchar(num_comb);
putchar(",");
}
putchar("\n");
return (0);
}
