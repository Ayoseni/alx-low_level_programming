#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: s1
 * @src: s2
 * @n: size of character to concatenate
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
