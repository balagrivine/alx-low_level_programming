#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct to be printed
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
	{
		printf("%s\n", d->name);
	}
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
	{
		printf("%s\n", d->owner);
	}
	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("%f\n", d->age);
	}

}
