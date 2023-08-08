#include "main.h"

/**
 * _strstr - Locates a substring within a string
 * @haystack: The string to search within
 * @needle: The substring to search for
 *
 * Return: Pointer to the first occurrence of the substring within the string,
 *         or NULL if no match is found
 */
char *_strstr(char *haystack, char *needle)
{
    for (; *haystack != '\0'; haystack++)
    {
        char *current_h = haystack;
        char *current_n = needle;

        while (*current_h == *current_n && *current_n != '\0')
        {
            current_h++;
            current_n++;
        }

        if (*current_n == '\0')
            return (haystack);
    }

    return (0);
}

