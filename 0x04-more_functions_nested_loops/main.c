#include "main.h"
#include "5-more_numbers.c"
#include "6-print_line.c"
#include "7-print_diagonal.c"
#include "8-print_square.c"
#include "10-print_triangle.c"

int main(void)
{
	more_numbers();
	print_line(5);
	print_diagonal(5);
	print_diagonal(10);
	print_diagonal(-8);
	print_diagonal(0);
	print_square(5);
	print_square(10);
	print_triangle(2);
	print_triangle(10);

	return (0);
}
