#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to be returned
 * Return: returns the length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
