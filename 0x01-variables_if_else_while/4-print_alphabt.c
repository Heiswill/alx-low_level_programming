#include <stdio.h>

/**
 * main - print alphabet except letters q & e
 *
 * Return: 0 (success)
 */
int main(void)
{
	char lt;

	for (lt = 'a'; lt = 'z'; lt++)
	{
		if (lt != 'q' && lt != 'e')
		{
			putchar(lt);
		}
	}
	putchar('\n');
	return (0);
}
