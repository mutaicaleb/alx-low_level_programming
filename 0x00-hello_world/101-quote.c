#include <stdio.h>
#include <unistd.h>
 /**
 * main - Entry point for the program
 *
 * Description: This function is the entry point for the program. It prints the
 *              message "and that piece of art is useful" - Dora Korpar,
 *              2015-10-19 to the standard error using the write function.
 *
 * Return: Always 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
