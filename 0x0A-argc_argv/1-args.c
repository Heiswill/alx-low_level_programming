#include <stdio.h>

/**
 * main - program that prints number of arguments passed into it.
 * @argc: argument count
 * @argv: array containing cmd line arguments
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%d\n", argc - 1);
		(void)argv;

	}
	return (0);
}
