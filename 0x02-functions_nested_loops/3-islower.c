#include <ctype.h>
#include "main.h"

/**
 * _islower - chek whether character is lowercase
 *
 * c - character's integer
 * Return: 1 if lowercase, 0  if uppercase
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
