#include "main.h"

/**
 * puts_half - print second half of a string
 *
 * @str: string to be checked
 */
void puts_half(char *str)
{
	int length = 0;
	int half;

	/* get length */
	while (str[length] != '\0')
		length++;

	/* Calculate half length */
	if (length % 2 != 0)
		half = (length + 1) / 2;
	else
		half = length / 2;

	// printf("%d\n", length);
	// printf("%d\n", half);

	for (half = half; half < length; half++)
		_putchar(str[half]);

	_putchar('\n');
}
