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
	if (d->name == NULL)
		printf("(nil)");
	else
	{
		printf("%s\n, d->name");
	}
	if (d == NULL)
		return;
	if (d->owner == NULL)
		printf("(nil)");
	else
	{
		printf("%s\n, d->owner");
	}
	if (d->age == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%d\n, d->age");
	}

}
