#include <stdio.h>
#include <unistd.h>
/*
 * This program demonstrates how to print text to the standard error using the write function.
 *
 * Usage: ./program
 *
 * Returns: 1 on success, 0 on failure.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
