#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @x: number to be checked for last digit
 * Return: last digit
 */
int print_last_digit(int x)
{
	int lastDigit = x % 10;

	_putchar(lastDigit + 48);

	return (lastDigit);
}
