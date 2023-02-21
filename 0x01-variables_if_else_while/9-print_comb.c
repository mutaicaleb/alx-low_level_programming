#include <stdio.h>
/**
 * main - Entry point of the program
 * Return:0 indicates succesfull execution of program
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
