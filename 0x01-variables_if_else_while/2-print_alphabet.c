#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return:0 to indicate successful execution
 *
 */

int main(void)
{
	char letter = 'a';
	while (letter <= 'z')
{
	putchar(letter);
	letter++;
}
	putchar('\n');
	return (0);
}
