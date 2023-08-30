#include "main.h"

/**
* print_diagonal - this function prints a diagonal line in terminal
* @n: number of times '\' should be printed.
*
*/
void print_diagonal(int n)
{
	int i, j;
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
