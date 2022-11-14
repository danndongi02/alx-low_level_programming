#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: string to be checked
 * @accept: bytes to be checked
 *
 * Return: bytes -> number of bytes from accept in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if (s[i + 1] == '\0')
			{
				return (bytes);
			}
		}

		s++;
	}

	return (bytes);
}
