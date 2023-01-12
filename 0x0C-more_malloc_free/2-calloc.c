#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memset - prints buffer in hexa
 * @s: buffer
 * @b: write
 * @n: size
 * Return: returns nothing
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

/**
 * _calloc - concatenate two strings
 * @nmemb: string 1
 * @size: string 2
 * Return: returns 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	_memset(str, 0, nmemb * size);
	return (str);
}
