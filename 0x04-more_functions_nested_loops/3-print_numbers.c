#include "main.h"
/**
 * print_numbers - is the name of the function
 *
 * @void: is the parametar of the function
 * Description: the function is to check case sensitve of a character
 * Return: is used to return zero or one based on case sensitive
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57 ; a++)
	{
		_putchar(a);
		_putchar('\n');
	}
}
