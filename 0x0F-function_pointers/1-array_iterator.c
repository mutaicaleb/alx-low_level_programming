#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates through array
 * @array: array to go through
 * @size: size of array
 * @action: action function to take
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int index;

	if (array == NULL || action == NULL)
		exit(98);
	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
