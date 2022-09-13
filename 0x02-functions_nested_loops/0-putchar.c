#include "main.h"

/**
 * _putchar - print _putchar
 *
 * Return: 0 (Success)
 */
int _putchar(void)
{
	int i = 0;
	char ch[] = "_putchar";

	while (ch[i] != '\0')
	{
		putchar(ch[i]);
	}
	return (0);
}
