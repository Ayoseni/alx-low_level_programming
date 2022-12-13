#include "main.h"

/**
 * print_alphabet_x10 - print 10x the alphabrt in lower case
 * Return: Returns nothing on success
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char letter;

	while (times++ < 10)
	{
		for (letter = 97; letter <= 122; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
