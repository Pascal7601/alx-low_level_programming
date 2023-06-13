#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: pointer to newly allocated space
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while ((str[len]) != '\0')
	{
		len++;
	}
	dup = malloc((sizeof(char) * len) + 1);
	if (dup == NULL)
		return (NULL);

	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
