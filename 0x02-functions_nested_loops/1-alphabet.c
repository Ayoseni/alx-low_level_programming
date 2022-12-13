#include "main.h"

/**
 * print_alphabet - print the alphabet in lower case
 * Return: Returns nothing on success
 */

void print_alphabet(void)
{
	int start = 97, end = 122;

	while (start <= end)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}

