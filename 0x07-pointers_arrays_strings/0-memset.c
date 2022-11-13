#include "main.h"

/**
 * _memset - fill the memory with a constant byte
 *
 * @s: pointer to the memory area to be filled
 * @b: byte to be filled to memory
 * @n: number of bytes to be filled
 *
 * Return: a pointer to hte filled area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
