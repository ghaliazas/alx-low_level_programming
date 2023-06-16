#include <stdio.h>

/**
 * main - entry point
 *
 * description: print all single digit numbers
 *
 * return: always 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
