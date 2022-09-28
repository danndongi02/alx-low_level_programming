#include "main.h"

/**
 * swap_int - swap two integers
 *
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int *c;

	c = a;
	*b = *a;
	*a = c;
}
