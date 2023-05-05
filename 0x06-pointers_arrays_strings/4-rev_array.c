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
	int i = n;

	while (i > 0)
	{
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		i--;
		_putchar(a[i]);
	}
}
