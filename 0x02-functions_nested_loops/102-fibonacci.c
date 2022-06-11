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
		_putchar(i);
		_putchar(',');
		_putchar(' ');
		result = a + b;
		a = b;
		b = result;
	}
	_putchar('\n');
}
