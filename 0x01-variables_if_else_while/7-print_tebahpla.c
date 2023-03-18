#include <stdio.h>

/**
 * main - entry point
 *
 * alph in reverse
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char *alph = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; alph[i] != '\0'; i++)
		putchar(alph[i]);

	putchar('\n');

	return (0);
}
