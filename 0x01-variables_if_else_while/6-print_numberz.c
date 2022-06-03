#include <stdio.h>

/**
 * main - print single digits from 0 - 10
 * Don't use the printf function
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
