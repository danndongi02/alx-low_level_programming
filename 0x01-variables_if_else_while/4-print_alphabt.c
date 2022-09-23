#include <stdio.h>

/**
 * main - print all letters apart from q and e
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (!(ch == 'q' || ch == 'e'))
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
