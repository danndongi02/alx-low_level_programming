#include "main.h"

/**
 * print_to_98 - print all numbers from n to 98
 *
 * @n: start number
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (int i = n; i >= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
}
