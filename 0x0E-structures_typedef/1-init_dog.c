#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog - this function initialize a variable of type struct dog
* @d: a pointer to the struct dog
* @name: string 'name'
* @age: float 'age'
* @owner: string 'owner'
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
          if (d ==NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
