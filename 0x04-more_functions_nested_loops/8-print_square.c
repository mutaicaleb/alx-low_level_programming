#include "main.h"

/**
 * print_square - function declaration
 * Description: prints a square  of hash symbols
 * @size: the size of the square
 * Return: void
 */

void print_square(int size);

void print_square(int size)
{
	int r;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
