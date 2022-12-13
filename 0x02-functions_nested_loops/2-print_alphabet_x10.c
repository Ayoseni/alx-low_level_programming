#include "main.h"

/**
 * print_alphabet_x10 - print 10x the alphabrt in lower case
 * Return: Returns nothing on success
 */

void print_alphabet_x10(void)
{
	int times = 0, start, end;

	while (times < 10)
	{
		start = 97, end = 122;
			while (start <= end)
			_putchar (start);
			start++;
	}
	_putchar ('\n');
	times++;
}
