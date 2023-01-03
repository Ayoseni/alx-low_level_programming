#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: buffer
 * @n: size
 * @b: write
 * Return: return 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
