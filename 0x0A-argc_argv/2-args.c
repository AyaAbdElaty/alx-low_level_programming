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

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
