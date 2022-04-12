#include <unistd.h>

/**
 * _putchar - writes the character c to stout
 * @c: The character to print
 *
 * Return: Success value is 1.
 * When wrroe occurs, -1 should be returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
