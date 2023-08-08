#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenate an array of strings into a single string.
 *
 * @ac: Number of strings in the array.
 * @av: Array of strings.
 *
 * Return: A pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
int i, j, str_index = 0, total_length = 0;
char *concatenated_str;

if (ac == 0 || av == NULL)

return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
total_length++;
}
total_length += ac;


concatenated_str = malloc(sizeof(char) * (total_length + 1));
if (concatenated_str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
concatenated_str[str_index] = av[i][j];
str_index++;
}

if (concatenated_str[str_index] == '\0')
{
concatenated_str[str_index++] = '\n';
}
}

return (concatenated_str);
}

