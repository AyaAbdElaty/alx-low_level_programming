#include "main.h"
/**
 * puts2- is the function name
 *
 * @str: is the function parameter
 * return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		if (i % 2 ==0)
		{
			_putchar(*(str + i));
		}
	}
}
