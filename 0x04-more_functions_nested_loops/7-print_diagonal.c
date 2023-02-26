#include "main.h"

/**
 *print_diagonal - prints a diagonalline
 *@n is the number of times we will print
 *Return:void
 */
void print_diagonal(int n);

void print_diagonal(int n)
{
	int i;

	while (n <= 0)
	{
		while (i < n)
		{
			_putchar('\');
			i--;
		}
		_putchar("\n");
		n++;
	}
}
