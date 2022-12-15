#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: character that checks for the digit
 * Return: returns 1 if sucessful else, returns 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
