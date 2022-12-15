#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the number of \ characters to be printed
 */

void print_diagonal(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar('\\');
	}
	_putchar('\n');
}
