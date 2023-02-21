#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return:0 to indicate successful execution of the program
 */
int main()
{
	int i;
	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
		putchar(i + 48); // print digits 0-9
		}
		else
		{
			putchar(i + 87); // print letters a-f
		}
	}
	putchar('\n');
	return 0;
}
