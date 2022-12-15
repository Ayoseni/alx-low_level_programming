#include "main.h"

/**
 * _isupper - checks for upper case characters
 * @c: the check charctter
 * Return: Returns 1 on success else, returns 0
 */

int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
