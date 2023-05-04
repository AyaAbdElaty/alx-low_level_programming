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

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		for (n = (i - 1) / 2; str[i] != '\0'; n++)
		{
			_putchar(str[n]);
			n++;
		}
	}
	if (i % 2 == 0)
	{
		for (n = i / 2; str[i] != '\0'; n++)
		{
			_putchar(str[n]);
			n++;
		}
	}
}
