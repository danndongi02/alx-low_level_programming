#include "main.h"

int find_sqrt(int n, int root);

/**
 * _sqrt_recursion - return the natural square root of a number
 *
 * @n: number to return the square root of
 * Return: if n has a natural square root, return the natural square
 *         if n has no natural square root, return (-1)
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (find_sqrt(n, root));
}

/**
 * find_sqrt - find the natural square root of a number
 *
 * @n: number to return the square root of
 * @root: the root to be tested
 * Return: if n has a natural square root, return square root
 *         if n has no natural square root, return (-1)
 */
int find_sqrt(int n, int root)
{
	if ((root * root) == n)
	{
		return (root);
	}
	else if (root == n / 2)
	{
		return (-1);
	}

	return (find_sqrt(n, root + 1));
}
