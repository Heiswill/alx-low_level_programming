#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all arguments
 * @ac: number of arguments
 * @av: argument array
 * Return: pointer to the string containing all arguments,
 * null upon failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i = 0, len = 0, j, k = 0;

	if (ac <= 0 || av == 0)
		return (NULL);

	for (; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	len++;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0';
	return (str);
}
