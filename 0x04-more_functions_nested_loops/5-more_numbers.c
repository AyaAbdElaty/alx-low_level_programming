#include "main.h"
/**
 * more_numbers - is the name of the function
 *
 * @void: is the parametar of the function
 * Description: the function is to print numbers from zero to forteen times 
 */

void more_numbers(void)
{
	int a;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		for (a = '0'; a <= '14'; a++)
		{
			_putchar(a);
		}
		_putchar('/n');
	}
	_putchar(i);
}
