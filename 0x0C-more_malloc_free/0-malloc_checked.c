#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - is a function that allocates memory using malloc
 * @b:is the size of int to be entered
 * Exit : terminates the program
 * Return:indicatws if the function was successful or not
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b * sizeof(int));
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
