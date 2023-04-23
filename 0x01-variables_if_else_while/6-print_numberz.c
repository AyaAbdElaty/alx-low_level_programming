#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (success)
 */
int main()
{
	int num;

	for (num = 0; num < 10; num ++)
	{
	        printf("%d", num);
		putchar(num);
	}
	putchar('\n');
        return (0);
}
