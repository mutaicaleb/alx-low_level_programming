#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point of the program
 *Return: 0 to indicate sussessful execution of the program
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	/* your code goes there */
	printf("Last digit of %d is %d\t", n, last);
	if (last > 5)
	{
	printf("and is greater than 5\n");
	}
	else if (last == 0)
	{
	printf("and is 0\n");
	}
	else if (last < 6 && last != 0)
	{
	printf("and is less than 6 and not 0\n");
	}
	return (0);
}
