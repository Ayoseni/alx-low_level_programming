#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a:array
 * @n: number of element of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0, Aux;

	n = n - 1;
	while (i <= n)
	{
		Aux = a[i];
		a[i++] = a[n];
		a[n--] = Aux;
	}
}
