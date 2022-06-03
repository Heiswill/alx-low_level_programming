#include <stdio.h>

/**
 * main - print alphabets except letters q & e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lt;

	for (lt = 'a'; lt <= 'z'; lt++)
	{
		if (lt != 'q' && lt != 'e')
		{
			putchar(lt);
		}
	}
	putchar('\n');
	return (0);
}
