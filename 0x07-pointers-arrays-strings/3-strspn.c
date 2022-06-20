#include "main.h"
#include <string.h>
#include <stdbool.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int initialLength = 0;

	int len1 = strlen(s);
	int len2 = strlen(accept);

	for (int i = 0; i < len1; i++)
	{
		bool found_match = false;

		for (int j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
				found_match = true;
				break;
		if (!found_match)
			break;
		else
			initialLength++;
		}
	}
	return (initialLength);
}
