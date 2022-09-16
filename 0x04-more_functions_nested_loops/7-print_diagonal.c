#include "main.h"

/**
 * print_diagonal - print \
 *
 * @n: number of times '\' should be printed
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n < 0)
			_putchar('\n');
		
		_putchar('\\');
	}
	_putchar('\n');
}
