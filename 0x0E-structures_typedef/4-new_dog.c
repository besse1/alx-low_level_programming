#include <stdlib.h>
#include "dog.h"

/**
* new_dog - this function creates a new dog
* @name: string 'name'
* @age: float 'age'
* @owner: string 'owner'
* Return: returns a pointer to a struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, c = 0;
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->age = age;

	for (i = 0, c = 0; name[i] != '\0'; i++)
		c++;
	newDog->name = malloc(sizeof(char) * (c + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	for (i = 0; 1 ; i++)
	{
		(*(newDog->name + i)) = name[i];
		if (name[i] == '\0')
			break;
	}

	for (i = 0, c = 0; owner[i] != '\0'; i++)
		c++;
	newDog->owner = malloc(sizeof(char) * (c + 1));
	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}

	for (i = 0; 1 ; i++)
	{
		(*(newDog->owner + i)) = owner[i];
		if (owner[i] == '\0')
			break;
	}

	return (newDog);
}
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
