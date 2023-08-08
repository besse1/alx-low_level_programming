#include "main.h"
#include <stdlib.h>

/**
* create_array - creates array of size size and initializes char c
* @size: the size of the array
* @c: the character to create the array for
* Return: returns a pointer to the array, NULL if fails
* Description: creates array of size size and initializes char c
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str =  malloc(sizeof(char) * size);
	if (size == 0   || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
