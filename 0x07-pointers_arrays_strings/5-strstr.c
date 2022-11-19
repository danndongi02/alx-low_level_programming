#include "main.h"

/**
 * _strstr - find the first occurrence of substring needle
 *
 * @haystack: string to be checked
 * @needle: substring to search for
 *
 * Return: 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int index = 0;

	if (needle == 0)
		return (haystack);

	while (*haystack)
	{
		if (haystack[index] == needle[index])
		{
			while (haystack[index] == needle[index])
			{
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;
			}
		}

		haystack++;
	}

	return ('\0');
}
