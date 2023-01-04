#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the strimg to be printed
 * Return: returns 0
 */

void _puts_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*(s) == '\0')
		_putchar('\n');
}
