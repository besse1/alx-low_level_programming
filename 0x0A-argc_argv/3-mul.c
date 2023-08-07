#include <stdio.h>
#include <stdlib.h>

/**
* main - this program multiplies two numbers
* @argc: the number of command-line arguments
* @argv: an array of strings containing the command-line arguments
* Return: on success 0
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
