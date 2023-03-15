#include "main.h"
#include <stdlib.h>

/**
 * _strdup - is a function that duplicates a string
 * @i - used for iteration
 * @len - finds the length of the str
 * @duplicate- is the copied string
 * Return: 0 when successful and 1 when its not
 * @str : string to be newly allocated in the memory
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len, i;

	i = 0;
	len = 0;

	if (str == 0)
	return (NULL);
	while (str[len)
		len++;

	duplicate = (char *)malloc(sizeof(char) * (len + 1));

	if (duplicate == 0)
		return (NULL);

	while (duplicate[i] = str[i] != '\0')
		i++;

	return (duplicate);
}
