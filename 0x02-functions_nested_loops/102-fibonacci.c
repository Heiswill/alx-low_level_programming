#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, result, n, i;

	a = 1;
	b = 2;
	n = 50;

	for (i = 1; i <= n; i++)
	{
		printf("%d, ", a);
		result = a + b;
		a = b;
		b = result;
	}
	printf("\n");
	return (0);
}
