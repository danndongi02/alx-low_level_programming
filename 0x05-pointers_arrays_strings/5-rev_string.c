#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length = 0, i;
	char reverse;

	/* find the length*/
	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= length / 2; i--)
	{
		reverse = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = reverse;
	}
}
