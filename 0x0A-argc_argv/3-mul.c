#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: is the parameter of the function
 * @argv: is the parameter of the function
 * Return: 1
 */
int main(int argc, char **argv)
{
	int mul;
	int i = 0;
	
	if (i == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
