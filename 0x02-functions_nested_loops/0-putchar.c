#include "main.h"

/**
 * main - print _putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	char ch[] = "_putchar";

	while (ch[i] != '\0')
	{
		putchar(ch[i]);
		i++;
	}
	putchar("\n");
	return (0);
}
