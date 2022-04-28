#include "main.h"

/**
 * wildcmp -
 *
 * Return: 
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1);
	else if (*s1 != *s2)
		return (0);
	else
		return (wildcmp(s1 + 1, s2 + 1));
}
