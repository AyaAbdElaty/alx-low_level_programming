#include "main.h"
#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char str [] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	-putchar('\n');

	return (0);
}
