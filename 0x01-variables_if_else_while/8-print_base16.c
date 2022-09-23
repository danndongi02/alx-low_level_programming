#include <stdio.h>

/**
 * main - print hexadecimal numbers and letters
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	char letter;

	for (n = 0; n < 10; n++)
		putchar(n + '0');

	for (letter = 'a'; letter < 'g'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
