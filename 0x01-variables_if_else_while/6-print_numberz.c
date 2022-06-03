#include <stdio.h>
#include <stdlib.h>

/**
 * main - print single digits from 0 - 10
 * Don't use the printf function
 * Return: 0 (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
