#include "main.h"

/**
 * string_toupper - changes all lower case letters of strings to upper case
 * @str: The string to be changed
 * Return: return s
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
