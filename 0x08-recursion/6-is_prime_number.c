#include "main.h"

int is_divisible(int n, int divisor);

/**
 * is_prime_number - check if an integer is a prime number
 *
 * @n: number to be checked
 * Return: if n is a prime number - 1
 *         if n is not a prime number - 0
 */
int is_prime_number(int n)
{
	int divide = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (is_divisible(n, divide));
}

/**
 * is_divisible - test the divisibility of a number
 *
 * @n: number to be tested
 * @divisor: number to divide with
 * Return: if n is divisible - 0
 *         if n is not divisible - 1
 */
int is_divisible(int n, int divisor)
{
	if (n % divisor == 0)
	{
		return (0);
	}

	if (divisor == n / 2)
	{
		return (1);
	}

	return (is_divisible(n, divisor + 1));
}
