#include "main.h"

/**
 * print_triangle - Print a triangle
 *
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int height, space, block;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for (space = size; space > height; space--)
			{
				_putchar(' ');
			}
			for (block = 0; block < height; block++)
			{
				_putchar('#');
			}

			if (height != size)
				_putchar('\n');
		}

		_putchar('\n');
	}
	_putchar('\n')
}
