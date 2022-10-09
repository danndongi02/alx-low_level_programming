#include "main.h"

/**
 * print_times_table - Print times table of n
 *
 * @n: times table
 */
void print_times_table(int n)
{
	int i, j, result;

	if (!(n < 0 || n > 15))
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				result = i * j;
				if (result > 9 && result < 100)
				{
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else if (result > 99)
				{
					_putchar(result / 100 + '0');
					_putchar((result / 10) % 10 + '0');
					_putchar(result % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
