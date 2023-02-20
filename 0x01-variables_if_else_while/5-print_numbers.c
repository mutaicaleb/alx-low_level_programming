#include <stdio.h>
/**
 * main- Entry point of the program
 *
 * Return:0 indicates successful execution of the program
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
