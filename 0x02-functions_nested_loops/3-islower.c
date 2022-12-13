#include "main.h"

/**
 * _islower - checks for lower case characters
 * @c: the character to be checked
 * Return: Returns 1 if successful else returns 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
