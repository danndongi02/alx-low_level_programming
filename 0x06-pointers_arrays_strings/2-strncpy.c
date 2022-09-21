#include "main.h"

/**
 * _strncpy - copies at mmost an inputted number of bytes from string src into
 * dest.
 *
 * @dest: The buffer storing the string copy
 * @src: The source string
 * @n: The maximum number of bytes to copied fom src
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, srcLen = 0;

	while (src[index++])
		srcLen++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = srcLen; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
