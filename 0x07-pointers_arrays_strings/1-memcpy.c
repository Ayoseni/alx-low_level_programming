#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination of the copied memory
 * @src: the source area of copied memory
 * @n: size of memory to be copied
 * Return: returns 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
