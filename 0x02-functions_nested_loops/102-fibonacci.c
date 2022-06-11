#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, result, i;

	a = '1';
	b = '2';

	for (i = '1'; i <= '50'; i++)
	{
		printf("%d, ", a);
		result = a + b;
		a = b;
		b = result;
	}
	return (0);
}
