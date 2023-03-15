#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates strings
 *@s1: string which should be emptied
 *@s2: string should add to another one
 *Return:concatenated string
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i, j,  len;
	char fstring;

	while (s1[len] || s2[len])
		len++;
	fstring = (char *)malloc(sizeof(char) * len)

	if (fstring == 0)
		return (NULL);

	for (i = 0; s1[i]; i++)
		fstring[j++] = s1[i];

	for (index = 0; s2[i]; i++)
		fstring[j++] = s2[i];

	return (fstring);
}
