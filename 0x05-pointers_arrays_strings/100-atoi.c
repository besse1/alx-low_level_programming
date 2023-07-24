#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @S The pointer to convert
 *
 * Return: the int converted from the string
 */
int _atoi(char *S)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (S[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (S[i] == '-')
			++d;
		if (S[i] >= '0' && S[i] <= '9')
		{
			digit = S[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (S[i + 1] < '0' || S[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
