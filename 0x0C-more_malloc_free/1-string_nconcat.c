#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: byte of s2
 * Return: returns 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int l, t, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	t = _strlen(s1);
	l = _strlen(s2);
	if (n < 1)
		l = n;
	str = malloc(t + l + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < t; i++)
		*(str + i) = *(s1 + i);
	for (i = 0; i < l; i++)
		*(str + (i + t)) = *(s2 + i);
	*(str + (i + t)) = '\0';
	return (str);
}

