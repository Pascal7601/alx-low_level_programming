#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: a string to be passed.
 * Return: pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *pa;
	int count;
	int str_len = 0;

	if (str == NULL)
		return (NULL);
	while (str[str_len] != '\0')
		str_len++;
	pa = malloc((str_len * sizeof(char)) + 1);
	if (pa == NULL)
		return (NULL);
	for (count = 0; count < str_len; count++)
		pa[count] =  str[count];
	return (pa);
}
