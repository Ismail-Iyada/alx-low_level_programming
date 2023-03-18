#include <stdio.h>

/**
 * main - entry point
 *
 * numbers of base 16 in lowercase,
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char *arr = "0123456789abcdef";
	int i;

	for (i = 0; arr[i] != '\0'; i++)
	{
		putchar(arr[i]);
	}
	putchar('\n');
	return (0);
}
