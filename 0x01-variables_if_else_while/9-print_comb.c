#include <stdio.h>
/**
 * main - Entry point of the program
 * Return:0 indicates succesfull execution of program
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar(i + 48);
			putchar(',');
			putchar(j + 48);
			if (i != 9 || j !=9)
			{
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
