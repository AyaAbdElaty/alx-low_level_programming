#include "main.h"
/*
 * putchar - is the name of the function
 * @c: is the parameter of the function
 *
 */
int _putchar(int c)
{
	return(write(1, &c, 1));
}
