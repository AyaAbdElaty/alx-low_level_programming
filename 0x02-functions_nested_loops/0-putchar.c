#include "main.h"

/**
 * main -Entry point
 * Return: Always 0 (success)
 */

int putlen()
{
	char str [] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return(ch++);
}
