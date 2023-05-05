#include "main.h"
/**
 * reverse_array- is the name of the function
 *
 * @a: is the argument of the function
 * @n: is the argument of the funtion
 * Description: the function that inverse numbers
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = (n + 1); i > 0; i--)
		_putchar(a[i]);
}
