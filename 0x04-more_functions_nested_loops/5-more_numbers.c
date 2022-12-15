#include "main.h"

/**
 * more_numbers - prints 10x the numbers from 0 to 14
 */

void more_numbers(void)
{
	int num, times;

	for (times = 0; times <= 9; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
