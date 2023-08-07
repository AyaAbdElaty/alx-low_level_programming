#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/*
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: is the variable of the function
 * @c: is the variable indicates the cahr
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		arr[size] = c;
	}
	return (arr);
}
