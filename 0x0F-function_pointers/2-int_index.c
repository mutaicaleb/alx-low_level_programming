#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - indexes the array
 * @array : array to be checked
 * @size : size of the array
 * @cmp : the function pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= o || cmp == NULL)
	return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i])
		{
			return (i);
		}
		return (-1);
	}
}
