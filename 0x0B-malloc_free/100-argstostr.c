#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, longeur;
	char *string;

	if (!ac || !av)
	{
		return (NULL);
	}
	for (i = 0, longeur = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			longeur++;
		}
		longeur++;
	}
	string = malloc(sizeof(char) * (longeur + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			string[k] = av[i][j];
		}
			
		string[k] = '\n';
		k++;
	}
	string[k] = '\0';

	return (string);
}
