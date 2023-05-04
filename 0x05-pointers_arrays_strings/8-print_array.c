#include "main.h"
#include <stdio.h>
/**
 * print_array - is the function name
 *
 * @a: is the function argument
 * @n: is the function argument
 * return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	_putchar('\n');
}
