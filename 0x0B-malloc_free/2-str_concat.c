#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0, total, j = 0;
	char *con;

	if ((s1 || s2) == NULL)
		return (NULL);

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	total = len1 + len2;

	con = malloc(sizeof(char) * (total + 1));
	if (con == NULL)
		return (NULL);

	while (i < (total))
	{
		con[i] = s1[i];
		i++;
	}
	while (j < total)
	{
		con[len1 + j] = s2[j];
		j++;
	}
	return (con);
}
