#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase, followed by a new line
 */
void print_alphabet(void)
{
        char a;

        for (a = 'a'; a <= 'z'; a++)
	{
                _putchar(a);
	}

        _putchar('\n');
}
