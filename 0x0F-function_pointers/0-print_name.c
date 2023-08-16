#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - entry point
 * @name: the name
 * @f: the printing f p
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
