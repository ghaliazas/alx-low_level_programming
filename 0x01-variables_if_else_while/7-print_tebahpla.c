#include <stdio.h>

/**
 * main - entry point
 *
 * description: print a-z in reverse
 *
 * return: always 0 (success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar("\n");
	return (0);
}
