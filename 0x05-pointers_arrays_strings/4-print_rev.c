#include "main.h"

/**
 * print_rev - print the reverse of a string
 *
 * @s: sring to be reversed
 */
void print_rev(char *s)
{
	int length = 0, index;

	while (s[length] != '\0')
	{
		length++;
	}

	for (index = length - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
