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
	int n;

	while (str[i])
	{
		i++;
	}
	for (i; i % 2 != 0; n++)
	{
		n = (i -1) / 2;
		_putchar(str[n]);
	}
	for (i; i % 2 == 0; n++)
	{
		n = i / 2;
		_putchar(str[n]);
	}
}
