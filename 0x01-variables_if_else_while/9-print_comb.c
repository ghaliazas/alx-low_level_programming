#include <stdio.h>

/**
 * main - entry point
 * description: print 0,1, -9
 * return: 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar("\n");
	return (0);
}
