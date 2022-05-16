#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator is the string to be printed between the strings
 * @n  is the number of strings passed to the function
 * Returns nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *ntg;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		ntg = va_arg(arguments, char*);
		if (ntg == NULL)
			printf("(nil)");
		else
		{
			if (i < (n - 1) && separator != 0)
				printf("%s%s", ntg, separator);
			else
				printf("%s", ntg);
		}
	}
	va_end(arguments);
	printf("\n");
}
