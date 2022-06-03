#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all numbers in base16
 * in lowercase
 * Return: 0
 */
int main(void)
{
	int i;
	char dlow;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (dlow = 'a'; dlow <= 'f'; dlow++)
	{
		putchar(dlow);
	}
	putchar('\n');
	return (0);
}
