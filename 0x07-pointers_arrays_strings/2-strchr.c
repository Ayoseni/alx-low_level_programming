#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: character
 * Return: return 0
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
	return (s);
}
