#include "main.h"

/**
 * print_diagsums - print the sum of diagonals of a matrix
 *
 * @a: matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0;
	int index1 = 0, index2 = 0;

	for (index1 = 0; index1 < size; index1++)
	{
		diag1 += *(a + index1 * size + index2);
		index2++;
	}

	index1 = 0;
	for (index2 = size - 1; index2 >= 0; index2--)
	{
		diag2 += *(a + index1 * size + index2);
		index1++;
	}

	printf("%d, %d\n", diag1, diag2);
}
