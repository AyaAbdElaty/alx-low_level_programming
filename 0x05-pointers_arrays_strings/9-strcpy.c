#include "main.h"
/**
 * _strcpy- is the name of the function
 *
 * description: copy string
 * @dest: is the argument of the function
 * @src: is the argument of the function
 * Return: pointer to dust
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
