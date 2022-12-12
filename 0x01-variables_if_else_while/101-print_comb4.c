#include <stdio.h>

/**
 * main - all possible different combinations of three digits
 * Return: Return 0
 */

int main(void)
{
	int num;
	int num1;
	int num2;

	for (num = 0; num < 10; num++)
	{
		for (num1 = num + 1; num1 < 10; num1++)
		{
			for (num2 = num1 + 1; num2 < 10; num2++)
			{
				putchar (num + '0');
				putchar (num1 + '0');
				putchar (num2 + '0');

				if (num == 7 && num1 == 8 && num2 == 9)
					continue;
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
