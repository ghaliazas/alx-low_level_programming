#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all alphabet letters except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'a')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}

	return (0);
}
