#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 to indicate successful execution of the program
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'q' && letter != 'e')
	{
	putchar(letter);
	}
	letter++;
	}
	putchar('\n');
	return (0);
}
