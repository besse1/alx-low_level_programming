#include "main.h"
/**
 * _isupper - function checks if it is uppercase letter
 * @c: char to check
 * Return: 1 if uppercase return and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
