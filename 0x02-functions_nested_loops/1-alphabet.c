#include "main.h"

/**
 * print_alphabet - Prints all the lowercase alphabets
 *
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
