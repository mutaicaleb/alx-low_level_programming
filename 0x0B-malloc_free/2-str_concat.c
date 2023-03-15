#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function declaration
 * @s1: string 1
 * @s2: string 2
 * Return: as string value
 */

char *str_concat(char *s1, char *s2);

/**
 * str_concat - function definition
 * @s1: the first string
 * @s2: the second string
 * Description: concatenates s1 and s2
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *fstring;
	int i;
	int j;
	int len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	fstring  = malloc(sizeof(char) * len);

	if (fstring == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		fstring[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		fstring[j++] = s2[i];

	return (fstring);
}
