#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * with dynamic memory allocation.
 * @s1: first string argument
 * @s2: second string argument
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	int tlen = s1_len + s2_len + 1;

	char *s = malloc(sizeof(char) * tlen);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (s == NULL)
		return (NULL);

	for (; i < s1_len; i++)
		s[i] = s1[i];
	for (; i < s2_len; i++)
		s[s1_len + i] = s2[i];
	s[tlen - 1] = '\0';
	return (s);
}
