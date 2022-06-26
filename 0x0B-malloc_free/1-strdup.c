#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as parameter.
 * @str: argument for array
 * Return: NULL is str=NULL, pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *strar;
	int i = 0, len = 0;

	strar = malloc(sizeof(str));

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (strar == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		strar[i] = str[i];
		i++;
	}

	return (strar);
}
