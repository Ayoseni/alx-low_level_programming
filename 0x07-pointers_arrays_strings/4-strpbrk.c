#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: buffer 1
 * @accept: buffer 2
 * Return: return 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (0);
}
