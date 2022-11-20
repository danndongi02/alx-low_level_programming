#include "main.h"

/**
 * print_chessboard - print the chessboard
 *
 * @a: chessboard to be printed
 */
void print_chessboard(char (*a)[8])
{
	int pos1, pos2;

	for (pos1 = 0; a[pos1][7]; pos1++)
	{
		for (pos2 = 0; pos2 < 8; pos2++)
		{
			_putchar(a[pos1][pos2]);
		}
		_putchar('\n');
	}
}
