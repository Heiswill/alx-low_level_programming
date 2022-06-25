#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - program that adds positive numbers.
 * @argc: argument input
 * @argv: string array
 * Return: result
 */
int main(int argc, char *argv[])
{
	int i, sum, val;

	sum = 0;
	if (argc < 1)
		printf("%d\n", 0);
	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		val = atoi(argv[argc]);
		sum += val;
	}
	printf("%d\n", sum);
	return (0);
}
