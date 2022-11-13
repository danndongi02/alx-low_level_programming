#include "main.h"

/**
 * _strchr - locaate a character in a string
 *
 * @s: string to be checkeds
 * @c: character to search
 *
 * Return: pointer to character if found, else return null character
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
