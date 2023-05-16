#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: is the parameter
 * @argv: is thte parameter
 * Return: 1
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
		if (*argv[i] < '0'|| *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
