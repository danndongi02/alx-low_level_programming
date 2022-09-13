#include "main.h"

/**
 * main - print _putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch[] = "_putchar";

	for (int i = 0; i < sizeof(ch); i++)
	{
		putchar(ch[i]);
	}
	return (0);
}