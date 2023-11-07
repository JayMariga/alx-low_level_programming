#include "dog.h"

/**
 * init_dog - Should initialize a variable of type struct dog.
 * @d: Is a pointer to struct type dog
 * @name: Another pointer to char name's dog
 * @age: The age of the dog
 * @owner: Will be pointer to char owner's dog
 *
 * Return: No.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
