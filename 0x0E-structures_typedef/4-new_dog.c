#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - is the name of the function
 * @ster: is the fucntion argument
 *
 * Return: length
 */
int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return(length);
}
/**
 * _strcopy - is the function name
 *
 * @src: word to copy
 * @dest: paste the copied word 
 *
 * Return: @dest
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 *
 * Return: struc pointer dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	/* name and age is less than*/
	if(!name || age < 0 || !owner)
		return(NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	(*dog).name = malloc(sizeof(char) * _strlen(name) + 1);
	if ((*dog).name == NULL)
	{
		free(dog);
		return(NULL);
	}
	(*dog).owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
}
