#include "main.h"

/**
 * _strcpy - copy a string
 *
 * @src: string to be copied
 * @dest: destination of copied string
 * Return: *dest (pointer to copied string)
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	/* get length */
	while (src[length] != '\0')
		length++;

	for (i = 0; i < length + 1; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
