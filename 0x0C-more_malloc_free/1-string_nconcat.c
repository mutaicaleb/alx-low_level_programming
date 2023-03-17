#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - is a function that concatenates two strings
 * @s1:string to be used
 * @s2:string to be used
 * @n:nubers to be passed in
 * Return: return a string or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *fstring;
	int count1, count2;

	count1 = 0;
	count2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s1 == NULL)
		s2 = "";

	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0')
		count2++;
	if (s2 >= n)
		n = s2;

	fstring = (int *)malloc(sizeof(char) * n + count1 + 1);

	if (fstring == NULL)
		return (NULL);

	int i;

	for (i = 0; i < count1; i++)
		fstring[i] = s1[i];

	for (i = 0; i < n; i++)
		fstring[i + count1] = s2[i];
	fstring[i + count1] = '\0';

	return (fstring);
}
