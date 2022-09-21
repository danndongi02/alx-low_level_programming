#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 * 			nul byte, to the end of the string pointed to by @dest
 *
 * @dest: a pointer to the string to be concatenated upon
 * @src: the source string to be appended to @dest
 * Return: A pointer ot the destination string @dest
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, destLen = 0;

	while (dest[index++])
		destLen++;

	for (index = 0; src[index]; index++)
	{
		dest[destLen++] = src[index];
	}

	return (dest);
}
