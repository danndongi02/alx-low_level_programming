#include "main.h"

/**
 * _putchar - print _putchar
 *
 * Return: 0 (Success)
 */
int _putchar(void)
{
	char ch[] = "_putchar";

	for (int i = 0; i < sizeof(ch); i++)
	{
		putchar(ch[i]);
	}
	return (0);
}
