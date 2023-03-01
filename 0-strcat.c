#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string; src string is appended to it
 *
 * @src: Source string; gets appended to dest string
 *
 * Return: Pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i] != '\0')
		i++;
	int j;

	while (src[j] != '\0')
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}

