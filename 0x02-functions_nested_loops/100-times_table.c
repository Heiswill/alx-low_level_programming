#include "main.h"

/**
 * print_times_table - prints n times table, starting with 0.
 * Return: 0.
 */
void print_times_table(int n)
{
	int i,j;

	if (n > 0 && n< 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				prod = i * j;

				if (prod <= n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
	return (0);
}
