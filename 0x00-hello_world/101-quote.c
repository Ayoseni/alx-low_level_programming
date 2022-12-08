#include<stdio.h>
#include<stdlib>

/**
 * main - this will print a program without printf ot puts function
 * Return: Return 1
 */

int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

