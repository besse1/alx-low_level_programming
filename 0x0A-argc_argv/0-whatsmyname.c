#include <stdio.h>

/**
* main - program that prints its name.
* @argc: the number of command-line arguments
* @argv: an array of strings containing the command-line arguments
* Return: on success 0.
*/
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
