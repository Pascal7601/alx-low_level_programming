#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *pa;
	int size, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = len = 0;
	while (s1[size] != '\0')
		size++;
	while (s2[len] != '\0')
		len++;
	pa = malloc(sizeof(char) * (size + len + 1));

	if (pa == NULL)
		return (NULL);
	size = len = 0;
	while (s1[size] != '\0')
	{
		pa[size] = s1[size];
		size++;
	}

	while (s2[len] != '\0')
	{
		pa[size] = s2[len];
		size++, len++;
	}
	pa[size] = '\0';
	return (pa);
}
