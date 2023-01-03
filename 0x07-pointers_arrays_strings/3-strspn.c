#include "main.h"

/**
 * _strspn - grts the length of a prefix substring
 * @s: buffer 1
 * @accept: buffer 2
 * Return: returns 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
				break;
		}
		if (!(accept[i]))
			break;
	}
	return (j);
}
