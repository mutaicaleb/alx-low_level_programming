#include "main.h"

/**
 *Description : print_line() prints a straight line
 *
 *
 *
 */
void print_line(int n);

void print_line(int n)
{
	if (n < 0)
	{
		_putchar("\n");
	}

	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar("\n");
}
