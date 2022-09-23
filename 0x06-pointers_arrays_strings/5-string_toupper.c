#include "main.h"

/**
 * string_toupper - change all lowercase letters to uppercase
 *
 * @str: string to be converted
 * Return: A pointer to the changed string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}
