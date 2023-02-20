#include <stdio.h>
/**
 * main- Entry point of the program
 *
 * Returrn:0 indicates that the program executes successfully
 *
 */
int main(void)
{
	char c;

	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
		return (0);
}
