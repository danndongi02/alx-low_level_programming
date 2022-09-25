#include "main.h"

/**
 * more_numbers - print 1 to 14, 10 times
 *
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				putchar(n / 10 + '0');
			}
			putchar(n % 10 + '0');
		}
		putchar('\n');
	}
}
