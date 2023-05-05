#include "main.h"
/**
 * _strncat - is the name of the functtion
 * @dest: is the parameter of the function
 * @src: is the parameter of the function
 * @n: is the parameter of the function
 * Return: return the dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '0'; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
