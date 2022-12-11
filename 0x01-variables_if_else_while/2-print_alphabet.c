#include <stdio.h>

/**
 * main - entry point
 * Return: Return 0
 */

int main(void)
{
	char Letter;

	for (Letter = 'a'; Letter <= 'z'; Letter++)
		putchar (Letter);
	putchar ('\n');
	return (0);
}
