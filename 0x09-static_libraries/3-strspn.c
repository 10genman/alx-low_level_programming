#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The string containing characters to match
 *
 * Return: The length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int length = 0;
    int r;

    while (*s)
    {
        for (r = 0; accept[r]; r++)
        {
            if (*s == accept[r])
            {
                length++;
                break;
            }
            else if (accept[r + 1] == '\0')
            {
                return (length);
            }
        }
        s++;
    }
    return (length);
}

