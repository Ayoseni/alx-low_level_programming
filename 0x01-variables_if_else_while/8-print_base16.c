#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase followed by a new line
 * Return: Return 0
 */

int main(void)
{
	int num;
	int letter;

	for (num = 0; num < 10; num++)
		putchar ((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar (letter);
	putchar ('\n');
	return (0);
}
