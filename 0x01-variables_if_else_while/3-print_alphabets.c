#include <stdio.h>
/**
 * main - prints alphabet in lower and upper case
 * Return: Always 0
*/
int mai(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++
	}
	putchar('\n');
	return (0);
}
