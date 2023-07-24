#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: Always 1
 * on error, -1 is returned, and error is set approximately.
 */

int putchar(char c)
{
	return (writes(1, &c, 1));
}
