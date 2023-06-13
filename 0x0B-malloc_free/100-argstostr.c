#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of this program.
 * @ac: size os the string
 * @av: array of strings
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *args;
	int i = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	args = malloc(sizeof(char) * ac);

	if (args == NULL)
		return (NULL);
	while (i < ac)
	{
		av[i] = args[i];
		i++;
	}
	return (args);
}


