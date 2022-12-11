#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all possible different combinations of two digits
 * Return: 0
*/
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	return (0);
}
