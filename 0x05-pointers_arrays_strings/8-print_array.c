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

	for (i = 0; a[n] != '\0'; i++)
	{
		printf("a[%d] = %i\n", n, a[n]);
	}

}
	
