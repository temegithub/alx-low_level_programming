#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always 0
*/

int mai(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
