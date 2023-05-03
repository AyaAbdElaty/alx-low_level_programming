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
	int len;
	len = _strlen(str);
	int e;
	int o;

	while (str[i])
	{
		if (len % 2 == 0)
		{
			e = len / 2;
			_putchar(str[e]);
		}
		else
		{
			o = (len -1) /2;
			_putchar(str[0]);
		}
		i++;
	}
}
