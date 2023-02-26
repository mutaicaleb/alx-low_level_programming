#include "main.h"

/**
 * print_square - function definition
 *Description : print_square prints a square
 *@square is what we are printing
 *
 *
 */
void print_square(int size);

void print_square(int size)
{
	int j, k;

	if (size <= 0)
	{
		_putchar("\n");
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar("\n");
		}
	}
}
