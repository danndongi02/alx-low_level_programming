#include "main.h"

/**
 * _strpbrk - locate the first occurrence in the string s of any bytes
 * in the string accept
 *
 * @s: string to be checked
 * @accept: bytes to check in s
 *
 * Return: pointer to the first occurence, or '\0' if none is found
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}

	return ('\0');
}
