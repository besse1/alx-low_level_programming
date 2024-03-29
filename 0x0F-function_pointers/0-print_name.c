#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - function prints a name
* @name: the name to be printed
* @f: a pointer to a funtion that accepts a string
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
