#include "main.h"

/**
 * puts2 - print the characters in the even position
 *
 * @str: string to be checked
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	/* get length */
	while (str[length] != '\0')
		length++;

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
