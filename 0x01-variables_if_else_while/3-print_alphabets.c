#include <stdio.h>

/**
 * main - entry value
 * Return: Return 0
 */

int main(void)
{
	char Letter;

	for (Letter = 'a'; Letter <= 'z'; Letter++)
		putchar (Letter);
	for (Letter = 'A'; Letter <= 'Z'; Letter++)
		putchar (Letter);
	putchar ('\n');
	return (0);
}
