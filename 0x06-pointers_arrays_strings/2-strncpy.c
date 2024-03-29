#include "main.h"
/**
 * _strncpy - is the name of the functtion
 * @dest: is the parameter of the function
 * @src: is the parameter of the function
 * @n: is the parameter of the function
 * Return: return the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
