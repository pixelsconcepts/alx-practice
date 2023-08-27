#include "fm_main.h"

/**
 * av_cmmd - copies tokens to argment vector.
 * @lineptr_cpy: the copy of the command.
 * @delimtr: the delimiter.
 * @av: the argument vector.
 * @count_token: the number of tokens.
 *
 * Return: the array of tokens.
 */
char **av_cmmd(char *lineptr_cpy, const char *delimtr,
char **av, int count_token)
{
	int index, j;
	char *fm_token;

	av = malloc(sizeof(char *) * count_token);
	if (av == NULL)
	{
		perror("Memory allocation for av array failed");
		return (NULL);
	}
	fm_token = _strtok(lineptr_cpy, delimtr);
	for (index = 0; fm_token != NULL; index++)
	{
		av[index] = malloc(sizeof(char) * _strlen(fm_token));
		if (av[index] == NULL)
		{
			perror("Memory allocation for av element failed");
			for (j = 0; j < index; j++)
			{
				free(av[j]);
			}
			free(av);
			return (NULL);
		}
		_strcpy(av[index], fm_token);
		fm_token = _strtok(NULL, delimtr);
	}
	av[index] = NULL;

	return (av);
}