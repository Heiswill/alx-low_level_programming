#include "main.h"

/**
 * _strlen_recursion - find length of a string, recursively.
 * @s: pointer to first char address
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * p_check - checks for palindrome.
 * @s: string
 * @len: length of string
 * Return: 1 if pal, 0 otherwise
 */
int p_check(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (s[0] != s[len - 1])
		return (0);
	else
		return (p_check((s + 1), (len - 2)));
}
/**
 * is_palindrome - recursively checks for palindrome.
 * @s: pointer to beginning of string
 * Return: 1 if pal, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (p_check(s, len));
}
