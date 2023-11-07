#include "dog.h"

/**
 * init_dog - Should initialize a variable of type struct dog.
 * @d: This is a pointer to struct type dog
 * @name: Another pointer to char name's dog
 * @age: This will show the dog's age
 * @owner: Another pointer to char owner's dog
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
