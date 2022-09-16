#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check if input is a digit from 0 to 9
 *
 * @c: character to be checked
 * Return: 1 if c is digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
