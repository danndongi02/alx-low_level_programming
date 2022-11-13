#include "main.h"

/**
 * _memcpy - copy memory area
 *
 * @dest: destination of copied memory
 * @src: memory to be copied
 * @n: number of memory to be copied
 *
 * Return: pointer to destnination of copied memory (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
