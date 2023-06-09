#include "main.h"
/**
 * _strcat - is the name of the function
 *
 * @dest: is the function parameter
 * @src: is the function parameter
 * Description: function to concatinate
 * Return: is returning dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j]; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
