#include "main.h"
/**
 * puts_half- is the function name
 *
 * @str: is the argument of the function
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int e;

	while (str[i])
	{
		i++;
	}
	while (str[i])
	{
		if (i % 2 == 0)
		{
			e = i / 2;
			_putchar(str[e]);
		}
		else
		{
			e = (i -1) /2;
			_putchar(str[e]);
		}
		i++;
	}
}
