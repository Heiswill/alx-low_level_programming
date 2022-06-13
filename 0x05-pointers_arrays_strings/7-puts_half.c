#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: an input string
 */
void puts_half(char *str)
{
	int i;
	int len = 0;
	int mid;
	
	while (str[len] != '\0')
	{
		len++;
	}
	if ((len % 2) != 0)
	{
		mid = (len + 1) / 2;
	}
	else
		mid = len / 2;
	for (i = mid; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
