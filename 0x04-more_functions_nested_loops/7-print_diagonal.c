#include "main.h"

/**
 * print_diagonal - function declaration
 * Description: print a diagonal line
 * @n: number of parts
 * Return: void
 */

void print_diagonal(int n);

/**
 * print_diagonal - function definition
 * Description: print a slash n times
 * @n: number of slashes
 * Return: void
 */

void print_diagonal(int n)
{
	int j;
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < j; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
