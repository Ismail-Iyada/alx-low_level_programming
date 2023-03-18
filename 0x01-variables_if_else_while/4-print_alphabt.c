#include <stdio.h>

/**
 * main - main entry
 *
 * alphabets in lowcase except EQ
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char *str = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');

	return (0);
}
