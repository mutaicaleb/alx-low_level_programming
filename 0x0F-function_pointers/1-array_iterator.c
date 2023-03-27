#include <stdio.h>
#include "function_pointer.h"
/**
 *array_iterator - prints out an interger
 *@size : is the size of the array
 *@action : is the function pointer to be called
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i=0; i<size; i++)
		action(array);
}
