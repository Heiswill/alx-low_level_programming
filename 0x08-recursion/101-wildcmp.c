#include "main.h"

/**
 * wildcmp - function that compares two strings and returns 1
 * if the strings can be considered identical,
 * otherwise return 0.
 * @s1: first input string
 * @s2: second input string
 * Return: 1 if the two strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (0);
	return (wildcmp((s1 + 1), (s2 + 1)));
}
