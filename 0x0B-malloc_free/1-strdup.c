#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy
 * @str: pointer to string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0, j;

	if (!str)
		return (0);

	while (*(str + 1))
		i++;
	i++;
	s = malloc(sizeof(char) * i);

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= 1; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
