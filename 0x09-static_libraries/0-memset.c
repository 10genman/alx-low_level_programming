#include "main.h"

/**
 * _memset - Fills a block of memory with a specified value
 * @s: Pointer to the memory to be filled
 * @b: The value to be set
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to the filled memory area (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}

	return (s);
}

