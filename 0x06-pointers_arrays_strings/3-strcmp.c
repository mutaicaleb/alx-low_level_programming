#include "main.h"

/**
 *
 * _strcmp - Function which compare two strings
 * @s1: first string
 * @s2:second string
 * Return: int value
 * Return: 3 (greater), -3 (lesser), 0 (equal)
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k;

	i = 0;
	while (*s1 != '\0')
	{
		s1++;
		i++;
	}
	j = 0;
	while (*s2 != '\0')
	{
		s2++;
		j++;
	}
	if (i > j)
		k = 3;
	else if (i < j)
		k = -3;
	else
		k = 0;
	return (k);
}
