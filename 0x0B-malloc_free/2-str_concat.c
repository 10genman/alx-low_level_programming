#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL if fail.
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated;
int i, s1_len = 0, s2_len = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
s1_len++;

for (i = 0; s2[i] != '\0'; i++)
s2_len++;

concatenated = malloc(sizeof(char) * (s1_len + s2_len + 1));

if (concatenated == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
concatenated[i] = s1[i];

int j = 0;
for (; s2[j] != '\0'; i++, j++)
concatenated[i] = s2[j];

concatenated[i] = '\0';
return (concatenated);
}

