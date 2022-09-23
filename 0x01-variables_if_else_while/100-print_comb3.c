#include <stdio.h>

int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (!(y <= x))
			{
				putchar(x + '0');
				putchar(y + '0');

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
