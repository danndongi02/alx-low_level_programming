#include "main.h"

/**
 * factorial - calculate the factorial of a number n
 *
 * @n: the factorial number
 * Return: result of the factorial
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	result *= factorial(n - 1);

	return (result);
}
