#include "main.h"

/**
 * times_table - Print the times table
 *
 */
void times_table(void)
{
	int x; /*factor*/
	int n; /* Count */
	int result;

	for (x = 0; x < 10; x++)
	{
		for (n = 0; n < 10; n++)
		{
			result = x * n;
			if (result >= 10)
			{
				putchar(result / 10 + '0');
				putchar(result % 10 + '0');
			}
			else if (result < 10)
			{
				putchar(' ');
				putchar(result + '0');
			}
			else
			{
				putchar(result + '0');
			}

			if (n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
