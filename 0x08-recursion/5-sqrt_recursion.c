#include "main.h"

/**
 * _sqrt_a - returns the natural square root of a number.
 * @a: number
 * @b: number of power
 * Return: return 0
 */

int _sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - checks the code
 * @n: number
 * Return: returns 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_a(n, 0));
}
