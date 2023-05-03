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
	int len;
	len = _strlen(str);

	while (str[i])
	{
		if (len % 2 == 0)
		{
			e = len / 2;
			_putchar(str[e]);
		}
		else
		{
			e = (len -1) /2;
			_putchar(str[0]);
		}
		i++;
	}
}
