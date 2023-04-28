#include "main.h"
/**
 * print_most_numbers - is the name of the function
 *
 * @void: is the parametar of the function
 * Description: the function is to check case sensitve of a character
 * Return: is used to return zero or one based on case sensitive
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
