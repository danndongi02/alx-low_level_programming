#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an array of integers
 *
 * @n: number of elements of the array to be printed
 * @a: array of elements
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);

		if (count != n - 1)
			printf(", ");
	}

	printf("\n");
}
