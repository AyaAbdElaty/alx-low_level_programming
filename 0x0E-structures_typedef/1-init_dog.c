#include "main.h"
#include "dog.h"
/**
 * init_dog - is the name of fucntion
 * @d: is the name of the dog
 * @name: is the dog name
 * @age: is the dog age
 * @owner: is the dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
