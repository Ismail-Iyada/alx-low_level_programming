#include <stdio.h>

/**
 * main - entry point
 *
 * alphabets in lower then upper case
 *
 * Return: always 0 (success)
 */

int main(void)
{

	char *strl = "abcdefghijklmnopqrstuvwxyz";
	char *stru = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	for (i = 0; strl[i]; i++)
	{
		putchar(strl[i]);
	}

	for (i = 0; stru[i]; i++)
	{
		putchar(stru[i]);
	}

	putchar('\n');

	return (0);
}
