#include <stdio.h>
/**
 * main - entry point
 *
 * 0123456789
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	return (0);
}
