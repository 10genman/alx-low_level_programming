#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Pointer to the destination string (dest)
 */
char *_strcpy(char *dest, char *src)
{
    int src_length = 0;
    int i = 0;

    while (*(src + src_length) != '\0')
    {
        src_length++;
    }

    for (; i < src_length; i++)
    {
        dest[i] = src[i];
    }

    dest[src_length] = '\0';

    return (dest);
}

