#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;
	int f, g, h;

	while (i < 58)
	for (f = '0'; f <= '9'; f++)
	{
		j = i + 1;
		while (j < 58)
		for (g = 0; g <= '9'; g++)
		{
			k = j + 1;
			while (k < 58)
			for (h = 0; h <= '9'; h++)
			{
				putchar(i);
				putchar(i);
				putchar(i);
				if (i < 55 || j < 56 || k < 57)
				if (f < g && g < h)
				{
					putchar(44);
					putchar(32);
					putchar(f);
					putchar(g);
					putchar(h);

					if (f != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	putchar('\n');
	return (0);
}
