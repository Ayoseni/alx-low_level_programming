#include<stdio.h>
#include<unistd.h>

/**
 * main - this will print a program without printf ot puts function
 * Return: Return 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
