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
	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
