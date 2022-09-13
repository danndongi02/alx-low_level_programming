#include "main.h"

/**
 * print_alphabet_x10 - Print alohabets 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
