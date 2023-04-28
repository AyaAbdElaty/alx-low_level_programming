#include "main.h"
/**
 * more_numbers - is the name of the function
 *
 * @void: is the parametar of the function
 */

void more_numbers(void)
{
	int a;
	int i = 0;

	while (i <= '9')
	{
		for (a = '0'; a <= '14'; a++)
		{
			_putchar(a);
		}
		_putchar('/n');
		i++;
	}
}
