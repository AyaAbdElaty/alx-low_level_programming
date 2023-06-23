#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - entry point
 * @array: the int array
 * @size: the array size
 * @action: is pointer to the function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
