#include <stdio.h>

/**
 * main - entry point
 *
 * description: print 0-9 using putchar while using int variable
 * return: always 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar("\n");
	return (0);
}
