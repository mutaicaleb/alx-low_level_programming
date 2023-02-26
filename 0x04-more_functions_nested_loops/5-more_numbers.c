#include "main.h"
#include <stdio.h>

/**
 * more_numbers - function declaration
 * Description: print 1-14, 10 times
 * Return: void
 */

void more_numbers(void);

/**
 * more_numbers - function definition
 * Description: prints 1-14, ten times
 * Return: void
 */

void more_numbers(void)
{
	int m;
	int n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar( / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
