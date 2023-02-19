#include <stdio.h>
#include <unistd.h>
/*
 *main - prints a line of code to a new line to an error
 *
 * Usage: ./program
 * * Returns: 1 on success, 0 on failure.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
