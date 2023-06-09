#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number for the amount of money
 * @argv: number of command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		int i, leastcents = 0, mon = atoi(argv[1]);
		int cen[] = {25, 10, 5, 2, 1}

		for (i = 0; i < 5; i++)
		{
			if (mon > cen[i])
			{
				leastcents = leastcents + (mon / cen[i]);
				mon = mon % cen[i];
				if (mon % cen[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
