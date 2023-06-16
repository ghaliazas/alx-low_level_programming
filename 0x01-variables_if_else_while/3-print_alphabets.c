#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print alphabet in lowercase then uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/* Print a-z */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/* Print A-Z */
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
