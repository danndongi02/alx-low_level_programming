#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check alphabetic character
 *
 * @c: character to be checked
 * Return: 1 if letter is lowercase or uppercase, 0 if not
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
