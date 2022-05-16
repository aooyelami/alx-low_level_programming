#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_numbers - A function that prints numbers
 * @separator is the string to be printed between numbers
 * @n is the number of integers passed to the function
 * Return: Sum of all parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int alt = 0;


	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		alt = va_arg(arguments, int);
		if (i < (n - 1) && separator != 0)
			printf("%d%s", alt, separator);
		else
			printf("%d", alt);
	}
	va_end(arguments);
	printf("\n");
}
