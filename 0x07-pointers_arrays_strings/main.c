#include "main.h"
#include <stdio.h>
#include "0-memset.c"
#include "1-memcpy.c"
#include "2-strchr.c"
#include "3-strspn.c"
#include "4-strpbrk.c"
#include "5-strstr.c"
#include "7-print_chessboard.c"
#include "8-print_diagsums.c"

void simple_print_buffer(char *buffer, unsigned int size);
int strchrTest(void);
int _strspnTest(void);
int _strpbrkTest(void);
int _strstrTest(void);
int printChessboardTest(void);
int printDiagsumsTest(void);

/**
 * main - test codes
 *
 * Return: 0 (Success)
 */
int main(void)
{
	/* Testing */
	/* _memset testing */
	// char buffer[98] = {0x00};

	// simple_print_buffer(buffer, 98);
	// _memset(buffer, 0x01, 95);
	// printf("-------------------------------------------------\n");
	// simple_print_buffer(buffer, 98);

	/* _memcpy test */
	// char buffer[98] = {0};
	// char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

	// simple_print_buffer(buffer, 98);
	// _memcpy(buffer + 50, buffer2, 10);
	// printf("-------------------------------------------------\n");
	// simple_print_buffer(buffer, 98);

	/* _strchr test */
	// strchrTest();

	/* _strspn test */
	// _strspnTest();

	/* _strpbrk test*/
	// _strpbrkTest();

	/* _strstr test*/
	// _strstrTest();

	/* print_chessboard test */
	// printChessboardTest();

	/* print_diagsums test */
	printDiagsumsTest();

	return (0);
}

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * strchrTest - test _strchr function
 *
 * Return: 0 (Success)
 */
int strchrTest(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}

	return (0);
}

/**
 * _strspnTest - Testing the _strspn function
 *
 * Return: 0 (Success)
 */
int _strspnTest(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n, m;

	n = _strspn(s, f);
	printf("%u\n", n);

	char *a = "First, solve the problem. Then, write the code.";
	char *b = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	m = _strspn(a, b);
	printf("%u\n", m);

	return (0);
}

/**
 * _strpbrkTest - Testing 4-strpbrk.c
 *
 * Return: 0 (Success)
 */
int _strpbrkTest(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);

	return (0);
}

/**
 * _strstrTest - testing 5 - strstr.c
 *
 * Return: 0 (Success)
 */
int _strstrTest(void)
{
	char *s = "hello my good people";
	char *f = "people";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);

	return (0);
}

/**
 * printChessboardTest - testing 7-print_chessboard
 *
 * Return: 0 (Success)
 */
int printChessboardTest(void)
{
	char board[8][8] = {
		{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
	};

	print_chessboard(board);

	return (0);
}

int printDiagsumsTest(void)
{
	int c3[3][3] = {
		{0, 1, 5},
		{10, 11, 12},
		{1000, 101, 102},
	};
	int c5[5][5] = {
		{0, 1, 5, 12124, 1234},
		{10, 11, 12, 123521, 12512},
		{1000, 101, 102, 12545, 214543435},
		{100, 1012451, 11102, 12545, 214543435},
		{10, 12401, 10452, 11542545, 1214543435},
	};

	print_diagsums((int *)c3, 3);
	print_diagsums((int *)c5, 5);

	return (0);
}
