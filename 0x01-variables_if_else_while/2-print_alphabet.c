#include <stdio.h>

/**
 * main - entry point
 *
 * alphabets in lowercase putchar
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');

	return (0);
}
