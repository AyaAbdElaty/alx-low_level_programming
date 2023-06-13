#include "main.h"
/*
 * *_strdup - is the name of the function
 * @str: is the arrgument
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[size] != '\0'; size ++);

	m = malloc (size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
