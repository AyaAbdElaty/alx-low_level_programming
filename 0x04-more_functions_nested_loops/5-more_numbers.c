#include "main.h"
/**
 * more_numbers - is the name of the function
 *
 * @void: is the parametar of the function
 * Return: retutn
 */

void more_numbers(void)
{
	int a;
	int i;
	int rem;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			rem = a;
			if (a > 9)
			{
				rem = a % 10;
				_putchar(1 + '0');
			}
			_putchar(rem + '0');
		}
		_putchar('/n');
	}
}
