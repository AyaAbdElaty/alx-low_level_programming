#include <stdio.h>
/**
 * main - Entry point
 * @argc: is the name of the parameter
 * @argv: is the name of the parameter
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	while (i < argc)
		i++;
	printf("%d\n", i);
	return (0);
}
