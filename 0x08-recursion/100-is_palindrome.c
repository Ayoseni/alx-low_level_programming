#include "main.h"

/**
 * long_l - checks code
 * @s: number
 * Return: returns 0
 */

int long_l(char *s)
{
	if (*s != '\0')
	{
		return (1 + long_l(s + 1));
	}
	return (0);
}

/**
 * compare - checks code
 * @s: number
 * @l: length
 * Return: returns 0
 */

int compare(char *s, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	if (*s == *(s + (l - 1)))
	{
		return (compare(s + 1, l - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - checks code
 * @s: character
 * Return: returns 0
 */

int is_palindrome(char *s)
{
	int l;

	l = long_l(s);
	return (compare(s, l));
}
