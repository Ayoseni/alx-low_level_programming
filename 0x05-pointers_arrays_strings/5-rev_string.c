#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int i = 0, a = 0, Aux;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > a)
	{
		Aux = s[i];
		s[i--] = s[a];
		s[a] = Aux;
	}
}
