#include "main.h"

/**
 * clear_bit - this function sets the value of a bit to 0.
 * @n: number to be modified
 * @index: index to be updated to 1
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int count = 0;
	unsigned long copy = *n;

	while (copy)
	{
		count++;
		copy >>= 1;
	}

	/*
 * unsigned long *n uses 4 * 8 bits in memory. If index is out of bound
 * of that memory, don't modify *n and return -1
 */
	if (index > 24)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
