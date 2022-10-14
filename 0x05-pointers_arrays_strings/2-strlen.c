#include "main.h"
#include <string.h>

/**
 * _strlen - Return length of string
 *
 * @s: String to be counted
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}

	return (length);
}
