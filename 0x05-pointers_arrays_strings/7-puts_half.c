#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: an input string
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int mid = len / 2;
	
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
	for (i = 0; i < mid; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
